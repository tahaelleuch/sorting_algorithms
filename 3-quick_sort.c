#include "sort.h"
/**
 * partition - partiting an array
 * @array: the main array
 * @low: the lower index
 * @hight: the highter index
 * @size: the size of the array
*/
int partition(int *array, int low, int hight, size_t size)
{
	int pivot = hight;
	int i = low - 1, j;
	int c;

	for (j = low; j <= hight; j++)
	{
		if (array[j] <= array[pivot])
		{
			i++;
			if (i != j)
			{
				c = array[i];
				array[i] = array[j];
				array[j] = c;
				print_array(array, size);
			}
		}
	}
	return (i);
}
/**
 * sort - sort an array of integer using recurtion
 * @array: the main array
 * @low: the lower index
 * @hight: the highter index
 * @size: the size of the array
*/
void sort(int *array, int low, int hight, size_t size)
{
	int pivot;

	if(low < hight)
	{
		pivot = partition(array, low, hight, size);
		sort(array, low, pivot - 1, size);
		sort(array, pivot + 1, hight, size);
	}
}
/**
 * quick_sort - orts an array of integers in ascending order
 * using the Quick sort
 * @array: the array to sort
 * @size: the size of the array
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, 0, size - 1, size);
}
