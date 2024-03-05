#include "sort.h"
#include <stddef.h>
#include <stdio.h>


/**
 * bubble_sort - sorts an array in ascending order
 * @array : is the array to be sorted
 * @size : the length or size of the array
 * Deacription: prints the array after each swap
 */


void bubble_sort(int *array, size_t size)
{
	size_t prev;
	size_t next = size;
	bool is_done = false;


	if (array == NULL || size < 2)
	{
		return;
	}

	while (is_done == false)
	{
		is_done = true;
		for (prev = 0; prev < next - 1; prev++)
		{
			if (array[prev] > array[prev + 1])
			{
				int temp;
			       	int *back, *front;

				back = &array[prev];
				front = &array[prev + 1];
				temp = *back;
				*back = *front;
				*front = temp;
				print_array(array, size);
				is_done = false;
			}
		}
		next--;
	}
}
