#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - Selection sort algorithm
 * @array: array
 * @size: size
 */
void swap(int *a, int *b);
void selection_sort(int *array, size_t size)
{
	size_t x, y;
	size_t index = 0;

	if (array == NULL || size <= 1)
		return;

	for (x = 0; x < size - 1; x++)
	{
		index = x;
		for (y = x + 1; y < size - 1; y++)
		{
			if (array[y] < array[index])
				index = y;
		}

		if (index != x)
		{
			swap(&array[x], &array[index]);
			print_array(array, size);
		}
	}
}
