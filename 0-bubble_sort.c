#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble sort implementation
 * @array: the array of integers to sort
 * @size: the size of the array (size_t size)
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t count = 0;

	count = count_unsorted(array, size);

	while (count > 0)
	{
		array = swap_unsorted(array, size);
		count = count_unsorted(array, size);
	}
}

/**
 * count_unsorted - counts the number of unsorted elements in an array
 * @array_int: the array of integers
 * @len: the length of the array
 * Return: the number of unsorted pairs in the array at a given iteration
 */

int count_unsorted(int *array_int, size_t len)
{
	size_t i = 0;
	size_t j = 0;
	int count = 0;

	for (i = 0; i < len - 1; i++)
	{
		j = i + 1;
		if (array_int[i] > array_int[j])
			count++;
	}
	return (count);
}

/**
 * swap_unsorted - swaps the position of unsorted pairs in an array at a given
 * iteration
 * @array_int: the array of integers to be sorted at a given iteration
 * @len: the length of the array
 * Return: a pointer to the array with swapped element pairs
 */

int *swap_unsorted(int *array_int, size_t len)
{
	size_t i = 0;
	size_t j = 0;
	int tmp_a = 0, tmp_b = 0;

	for (i = 0; i < len - 1; i++)
	{
		j = i + 1;
		if (array_int[i] > array_int[j])
		{
			tmp_a = array_int[i];
			tmp_b = array_int[j];

			array_int[i] = tmp_b;
			array_int[j] = tmp_a;
		}
		print_array(array_int, len);
	}
	return (array_int);
}
