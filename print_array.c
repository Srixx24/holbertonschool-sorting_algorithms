#include <stdio.h>
#include "sort.h"
/**
 * print_array - printing array
 * @array: array
 * @size: size
 */
void print_array(int *array, size_t size)
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		printf("%d", array[x]);
		if (x != size - 1)
			printf(", ");
	}
	printf("\n");
}
