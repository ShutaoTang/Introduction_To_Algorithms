#include "Sort.h"
#include <time.h>
#include <stdio.h>
#define LENGTH 1000

int main(void)
{
   srand(time(NULL));
   int array[LENGTH];
   unsigned int i=0;

   for (i=0;i<LENGTH;i++)
      array[i] = rand()%100000+1;

   printf("Unsorted array:");
   for(i=0; i<LENGTH; i++)
      printf("%d\n",array[i]);

   //insertion_sort(array,sizeof array /(int)sizeof(int));
   //reverse_insertion_sort(array,sizeof array /(int)sizeof(int));
   //insertion_sort(array,sizeof array /(int)sizeof(int));
   //merge_sort(array,0,LENGTH-1);

   printf("\nSorted array?\n");
   for(i=0; i<LENGTH; i++)
      printf("%d\n",array[i]);

getchar();
return 0;
}