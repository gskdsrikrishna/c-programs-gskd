#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
void main()
{
clrscr();
 char *str=NULL;
 str=(char*)calloc(10,sizeof(char));
 strcpy(str,"Hello");
 printf("String is %s\n",str);
 free(str);
getch();
}