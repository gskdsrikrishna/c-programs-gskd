#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
#include<dos.h>
void main()
{
clrscr();
 char far *fptr;
 char *str="Hello";
 fptr=(char far *)farmalloc(10);
 movedata(FP_SEG(str),FP_OFF(str),FP_SEG(fptr),FP_OFF(fptr),strlen(str)+1);
 printf("Far string is:%Fs\n",fptr);
 farfree(fptr);
getch();
}