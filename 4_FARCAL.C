#include<stdio.h>
#include<alloc.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
void main()
{
clrscr();
 char far *fptr;
 char *str="Hello";
 fptr=(char far *)farcalloc(10,sizeof(char));
 movedata(FP_SEG(str),FP_OFF(str),FP_SEG(fptr),FP_OFF(fptr),2strlen(str));
 printf("Far string is:%Fs\n",fptr);
 farfree(fptr);
getch();
}