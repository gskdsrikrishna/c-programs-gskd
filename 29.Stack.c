#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int element) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow: Cannot push more elements.\n");
    } else {
        top++;
        stack[top] = element;
        printf("Element pushed successfully.\n");
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow: Cannot pop from an empty stack.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("Stack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid choice.\n");
        }
        printf("\n");
    }
}
