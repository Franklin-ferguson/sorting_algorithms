#include "sort.h"
#include <stddef.h>
#include <stdio.h>

/**
 * swap_func - swaps two integers
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 */

void swap_func(int *a, int *b)
{
	int tempo;

	tempo = *a;
	*a = *b;
	*b = tempo;
}

/**
 * selection_sort - sorts an array using selecttion sort
 * @array: the array to be sorted
 * @size: the size of the array
 *
 * Description: prints the sorted array
 */
void selection_sort(int *array, size_t size)
{
	size_t current;
	size_t temp;
	size_t end = size;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (temp = 0; temp < end - 1; temp++)
	{
		int *final = array + temp;

		for (current = temp + 1; current < end; current++)
		{
			final = (array[current] < *final) ? (array + current) : final;
		}
		if ((array + temp) != final)
		{
			swap_func(array + temp, final);
			print_array(array, size);
		}
	}

}
