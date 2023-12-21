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
 * Return: 0
 */
int split(int *array, int low, int hi, size_t size)
{
	int *pivot, x, y;

	pivot = array + hi;
	for (x = y = low; y < hi; y++)
	{
		if (array[y] < *pivot)
		{
			if (x < y)
			{
				swap(array + x, array + y);
				print_array(array, size);
			}
			x++;
		}
	}
	if (array[x] > *pivot)
	{
		swap(array + x, pivot);
		print_array(array, size);
	}
	return (x);
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
void rehelp(int *array, int low, int hi, size_t size)
{
	int x;

	if (low < hi)
	{
		x = split(array, low, hi, size);
		rehelp(array, low, x - 1);
		rehelp(array, x + 1, hi);
	}
}
