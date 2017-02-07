#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void swap(int *xp, int *yp);

void bubble_sort(int *array, size_t size);

int main(void)
{

	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);
	
	print_array(array, n);
	printf("\n");
	
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}


/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}




void bubble_sort(int *array, size_t size)
{
  size_t i, j, temp;
  

  for (i = 1; i < size; i++)
  {
    for (j = 0; j < size - 1; j++)
    {
      if (array[j] > array[j + 1])
      {
      	swap(&array[j], &array[j + 1]);
      } 
    }
    print_array(array, size);
  }
}
