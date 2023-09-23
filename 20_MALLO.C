#include<stdio.h>
#include<alloc.h>
#include<string.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
 char *str;
 if((str==(char*)malloc(10))==NULL)
 {
  printf("Not enough memory to allocate buffer\n");
  exit(1);
 }
 strcpy(str,"Hello");
 printf("String is:%s\n",str);
 free(str);
getch();
}