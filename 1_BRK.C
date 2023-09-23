#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
 char *ptr;
 printf("Changing allocation with brk()\n");
 ptr=(char*)malloc(1);
 printf("Before brk() call:%lu bytes free\n",coreleft());
 brk(ptr+1000);
 printf("After brk() call:%lu bytes free\n",coreleft());
getch();
}