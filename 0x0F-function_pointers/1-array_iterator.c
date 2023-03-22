#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array of integers
 * @size: the size of the array
 * @action: pointer to the function to be executed on each element of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (!array || !action)
        return;

    for (size_t i = 0; i < size; i++)
        action(array[i]);
}
