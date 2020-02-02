#include "sort.h"
/**
 * _swap - function to swap to elements of a list
 * @number_1: Pointer to element 1
 * @number_2: Pointer to element 2
 * Return: Not return
 */
void _swap(int *number_1, int *number_2)
{
	int temp = *number_1;

	*number_1 = *number_2;
	*number_2 = temp;
}
/**
 * bubble_sort - bubble sorting algorithm
 * @array: Pointer to array to sort
 * @size: Size of array to sort
 * Return: Not return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < (size - 1); i++)
		for (j = 0; j < (size - i - 1); j++)
			if (array[j] > array[j + 1])
			{
				_swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
}
