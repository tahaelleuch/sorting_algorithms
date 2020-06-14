#include "sort.h"
/**
 * bubble_sort -  function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: The array to sort
 * @size: the size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int c;

	for (j = size; j > 0; j--)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				c = array[i];
				array[i] = array[i + 1];
				array[i + 1] = c;
				print_array(array, size);
			}
		}
	}
}
