#include <stdio.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int element) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue Overflow: Cannot enqueue more elements.\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = element;
        printf("Element enqueued successfully.\n");
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow: Cannot dequeue from an empty queue.\n");
    } else {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
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
