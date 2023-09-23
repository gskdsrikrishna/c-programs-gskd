#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NUM_PTRS 10
#define NUM_BYTES 16
void main()
{
clrscr();
 char far *array[NUM_PTRS];
 int i;
 for(i=0;i<NUM_PTRS;i++)
  array[i]=(char far *)farmalloc(NUM_PTRS);
 for(i=0;i<NUM_PTRS;i+=2)
  farfree(array[i]);
 if(farheapcheck()==_HEAPCORRUPT)
  printf("Heap is corrupted.\n");
 else
  printf("Heap is OK.\n");
getch();
}