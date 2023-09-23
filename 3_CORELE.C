#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
 printf("The difference between the heighest allocated block and\n");
 printf(" the top of the heap is:%lu bytes\n",(unsigned long)coreleft());
getch();
}