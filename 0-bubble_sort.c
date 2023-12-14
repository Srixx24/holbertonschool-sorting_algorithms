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
	size_t x, y;

	if (array == NULL || size == 0)
		return;
	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				swap(&array[y], &array[y + 1]);
			}
		}
	}
	print_array(array, size);
}
/**
 * print_array - printing array
 * @array: array
 * @size: size
 */
void print_array(int *array, size_t size);
{
	int x;

	for (x = 0; x < size; x++)
	{
		printf("%d", array[x]);
		if (x != size - 1)
			printf(", ");
	}
	printf("\n");
}
