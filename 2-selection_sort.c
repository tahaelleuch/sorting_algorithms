#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, idx_min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				idx_min = j;
			}
		}
		if (min != array[i])
		{
			array[idx_min] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
