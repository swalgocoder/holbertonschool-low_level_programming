#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void bubble_sort(int [], size_t size);

int main(void)
{

	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t n = sizeof(array) / sizeof(array[0]);

	bubble_sort(array, n);
	return (0);
}
  



void bubble_sort(int array[], size_t size)
{
  size_t i, j, k, temp;
  
  printf("\nUnsorted array:");
  
  for (k = 0; k < size; k++)
  {
	printf("%5d,", array[k]);
  }
  
  for (i = 1; i < size; i++)
  {
    //* size -1 not to get out of index*//
    for (j = 0; j < size - 1; j++) //*last i elements are already in place*//
    {
      if (array[j] > array[j + 1])
      {
	  temp = array[j];
	  array[j] = array[j + 1];
	  array[j + 1] = temp;
      } 
    }	  
  }
  printf("\nAfter pass %lu : ", i);
  for (k = 0; k < size; k++)
  {
  printf("%5d,", array[k]);
  }
}
