#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, less;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		less = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[less])
				less = j;
		}
		tmp = array[less];
		array[less] = array[i];
		array[i] = tmp;
		print_array(array, size);
	}
}
