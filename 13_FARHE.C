#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NUM_PTRS 10
#define NUM_BYTES 16
int main(void)
{
 struct farheapinfo hi;
 char far *array[NUM_PTRS];
 int i;
 for(i=0;i<NUM_PTRS;i++)
  array[i]=(char far *)farmalloc(NUM_BYTES);
 for(i=0;i<NUM_PTRS;i+=2)
  farfree(array[i]);
 hi.ptr=NULL;
 printf("Size status\n");
 printf("---- ------\n");
 while(farheapwalk(&hi)==_HEAPOK)
  printf("%7u   %s\n",hi.size,hi.in_use ? "used" : "free");
return 0;
}