#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
 printf("The difference between the highest allocated block in the far\n");
 printf("heap and the top of the far heap is:%lu bytes\n",farcoreleft());
getch();
}