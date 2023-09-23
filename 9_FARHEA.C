#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NUM_PTRS 10
#define NUM_BYTES 16
int main(void)
{
clrscr();
 char far *array[NUM_PTRS];
 int i;
 for(i=0;i<NUM_PTRS;i++)
  array[i]=(char far *) farmalloc(NUM_BYTES);
 for(i=0;i<NUM_PTRS;i+=2)
  farfree(array[i]);
  for(i=0;i<NUM_PTRS;i++)
  {
   printf("Node %2d",i);
   switch(farheapchecknode(array[i]))
   {
    case _HEAPEMPTY:
	printf("No heap.\n");
	break;
    case _HEAPCORRUPT:
	printf("Heap corrupt.\n");
	break;
    case _BADNODE:
	printf("Bad mode.\n");
	break;
    case _FREEENTRY:
	printf("Free entry.\n");
	break;
    case _USEDENTRY:
	printf("Used entry.\n");
	break;
    default:
	printf("Unknown return code.\n");
	break;
    }
  }
 return 0;
}