#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NUM_PTRS 10
#define NUM_BYTES 16
int main(void)
{
 struct heapinfo hi;
 char *array[NUM_PTRS];
 int i;
 for(i=0;i<NUM_PTRS;i++)
  array[i]=(char *)malloc(NUM_BYTES);
 for(i=0;i<NUM_PTRS;i+=2)
  free(array[i]);
 hi.ptr=NULL;
 printf("Size status\n");
 printf("---- ------\n");
 while(heapwalk(&hi)==_HEAPOK)
  printf("%7u   %s\n",hi.size,hi.in_use ? "used" : "free");
return 0;
}