#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<string.h>
int main(void)
{
 char *str;
 str=(char *)malloc(10);
 strcpy(str,"Hello");
 printf("String is:%s\n Address is:%p",str,str);
 str=(char *)realloc(str,20);
 printf("String is %s\n New address is %p\n",str,str);
 free(str);
return 0;
}