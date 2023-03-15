#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: On success, a pointer to the array created. On failure, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
