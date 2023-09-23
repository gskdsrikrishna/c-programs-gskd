#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
clrscr();
 char far *fptr;
 char far *newptr;
 fptr=(char far *) farmalloc(16);
 printf("First address:%Fp\n",fptr);
 newptr=(char far *) farrealloc(fptr,64);
 printf("New address:%Fp\n",newptr);
 if(newptr!=NULL)
  farfree(newptr);
getch();
}