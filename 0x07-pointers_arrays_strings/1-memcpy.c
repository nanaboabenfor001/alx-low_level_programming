#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Copies `n` bytes from the memory area pointed to by `src` to
 * the memory area pointed to by `dest`.
 * @dest: Pointer to the destination array where the content is to be copied.
 * @src: Pointer to the source of data to be copied.
 * @n: Number of bytes to copy.
 *
 * Return: A pointer to the destination array `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
