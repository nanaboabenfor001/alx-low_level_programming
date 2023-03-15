#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string or NULL if str is NULL or
 * if insufficient memory was available
 */
char *_strdup(char *str)
{
        char *dup_str;
        int i, len = 0;

        if (str == NULL)
                return (NULL);

        /* find length of string */
        while (str[len] != '\0')
                len++;

        /* allocate memory for duplicate string */
        dup_str = malloc(sizeof(char) * (len + 1));

        if (dup_str == NULL)
                return (NULL);

        /* copy string to new memory location */
        for (i = 0; i <= len; i++)
                dup_str[i] = str[i];

        return (dup_str);
}
