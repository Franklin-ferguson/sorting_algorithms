#include "sort.h"
#include <stdio.h>
#include <stddef.h>

/**
 * swap_func - Swaps two integers in the array.
 * @back: The first integer to be swaped.
 * @front: The second integer to be swaped.
 */
void swap_func(int *back, int *front)
{
	int temp;

	temp = *back;
	*back = *front;
	*front = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap step is completed.
 */
void bubble_sort(int *array, size_t size)
{
	size_t prev;
	size_t next = size;
	bool is_done = false;

	if (array == NULL || size < 2)
		return;

	while (is_done == false)
	{
		is_done = true;
		for (prev = 0; prev < next - 1; prev++)
		{
			if (array[prev] > array[prev + 1])
			{
				swap_func(array + prev, array + prev + 1);
				print_array(array, size);
				is_done = false;
			}
		}
		next--;
	}
}
