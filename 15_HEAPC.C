#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NUM_PTRS 10
#define NUM_BYTES 16
int main(void)
{
clrscr();
 char *array[NUM_PTRS];
 int i;
 for(i=0;i<NUM_PTRS;i++)
  array[i]=(char *)malloc(NUM_BYTES);
 for(i=0;i<NUM_PTRS;i+=2)
  free(array[i]);
 if(heapcheck()==_HEAPCORRUPT)
  printf("Heap corrupted.\n");
 else
  printf("Heap is OK.\n");
getch();
}