#include <stdio.h>
#include "sort.h"
/**
 * swap - swaping values
 * @a: first value
 * @b: second value
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - Bubble sort algorithm
 * @array: array
 * @size: size
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y, z;

	if (array == NULL || size == 0)
		return;
	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				swap(&array[y], &array[y + 1]);
				for (z = 0; z < size; z++)
				{
					printf("%d", array[z]);
					if (z != size - 1)
						printf(", ");
				}
			}
		}
		for (y = 0; y < size; y++)
		{
			printf("%d", array[y]);
			if (y != size - 1)
				printf(", ");
		}
		printf("\n");
	}
}
