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
	size_t i, j;
    	bool is_sorted = false;

   	if (array == NULL || size < 2)
        	return;

    	for (i = 0; i < size - 1 && !is_sorted; i++)
    	{
        	is_sorted = true;
        	for (j = 0; j < size - i - 1; j++)
        	{
            		if (array[j] > array[j + 1])
            		{
                		int temp = array[j];
                		array[j] = array[j + 1];
               			array[j + 1] = temp;
                		print_array(array, size);
                		is_sorted = false;
            		}
        	}
    	}
}
