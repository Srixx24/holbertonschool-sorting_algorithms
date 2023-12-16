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
	return (x + 1);
}
/**
 * rehelp - sort array recursively
 * @array: array
 * @low: lower
 * @hi: upper
 * @size: size
 */
void rehelp(int *array, int low, int hi)
{
	int x;

	if (low < hi)
	{
		x = split(array, low, hi);
		rehelp(array, low, p - 1);
		rehelp(array, p + 1, hi);
	}
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
