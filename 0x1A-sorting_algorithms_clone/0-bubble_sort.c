#include "sort.h"
#include <stdbool.h>
/**
 * swap: swap array elements
 * @xp: ptr to array element
 * @yp: prt to array element
 * Return: void
 */

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

/**
 * bubble_sort - sort ab array of integers asending order
 * @array: input array
 * @size: size of array
 * Return: void
 */


void bubble_sort(int *array, size_t size)
{
  size_t i, j;
  bool isSorted;

  for (i = 1; i < size; i++)
  {
    isSorted = true;
    for (j = 0; j < size - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
      	swap(&array[j], &array[j + 1]);
	isSorted = false;
	print_array(array, size);
      } 
    }
    /* if no two elements were swapped by inner loop, then break*/
    if (isSorted)
      break;
  }
}
