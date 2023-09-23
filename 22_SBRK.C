#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
 printf("Changing allocation with sbrk()\n");
 printf("Beofre sbrk() call:%lu bytes free\n",(unsigned long)coreleft());
getch();
}