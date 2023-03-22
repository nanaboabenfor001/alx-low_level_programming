#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array of integers to iterate over
 * @size: number of elements in the array
 * @action: pointer to the function to execute on each element of the array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (array && action)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}
