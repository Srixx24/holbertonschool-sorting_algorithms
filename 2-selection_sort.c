#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - Selection sort algorithm
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, z;
	size_t index = 0;
	size_t temp;

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
			temp = array[x];
			array[x] = array[index];
			array[index] = temp;

			for (z = 0; z < size; z++)
				printf("%d, ", array[z]);

			printf("%d \n", array[size - 1]);
		}
	}
}
