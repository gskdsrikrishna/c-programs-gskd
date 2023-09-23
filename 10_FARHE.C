#include<mem.h>
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NUM_PTRS 10
#define NUM_BYTES 16
int main(void)
{
 char far *array[NUM_PTRS];
 int i,j,res;
 for(i=0;i<NUM_PTRS;i++)
  if((array[i]=(char far *) farmalloc(NUM_BYTES))==NULL)
  {
   printf("No memory for allocation.\n");
   return 1;
  }
 for(i=0;i<NUM_PTRS;i+=2)
  farfree(array[i]);
 if(farheapfillfree(1)<0)
 {
  printf("Heap corrupted.\n");
  return 1;
 }
 for(i=1;i<NUM_PTRS;i+=2)
  for(j=0;j<NUM_BYTES;j++)
   array[i][j]=0;
 res=farheapcheckfree(1);
 if(res<0)
  switch(res)
  {
   case _HEAPCORRUPT:
       printf("Heap corruted.\n");
       return 1;
   case _BADVALUE:
       printf("Bad value in free space.\n");
       return 1;
   default:
       printf("Unknown error.\n");
       return 1;
   }
  printf("Test successful.\n");
return 0;
}