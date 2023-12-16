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
 * split - spliting array
 * @array: array
 * @low: lower
 * @hi: upper
 * return: x + 1
 */
int split(int *array, int low, int hi)
{
	int pivot = array[hi];
	int x = low - 1;
	int y;

	for (y = low; y <= hi - 1; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			swap(&array[x], &array[y]);
		}
	}
	swap(&array[x + 1], &array[hi]);
	print_array(array, high + 1);

	return (x + 1);
}
void rehelp(int *array, int low, int high);
/**
 * quick_sort - Quick sort algorithm
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	rehelp(array, 0, size - 1);
}
/**
 * rehelp - sort array recursively
 * @array: array
 * @low: lower
 * @hi: upper
 */
void rehelp(int *array, int low, int hi)
{
	int x;

	if (low < hi)
	{
		x = split(array, low, hi);
		rehelp(array, low, x - 1);
		rehelp(array, x + 1, hi);
	}
}
