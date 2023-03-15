#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: NULL if str is NULL or insufficient memory was available.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	i = 0;

	while (i < len)
	{
		dup_str[i] = str[i];
		i++;
	}

	dup_str[i] = '\0';

	return (dup_str);
}
