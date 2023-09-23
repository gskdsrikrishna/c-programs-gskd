#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
void main()
{
clrscr();
 char *str;
 str=(char*)malloc(10);
 strcpy(str,"Hello");
 printf("String is %s\n",str);
 free(str);
getch();
}