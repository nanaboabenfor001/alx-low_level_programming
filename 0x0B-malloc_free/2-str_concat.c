#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: On success, a pointer to the concatenated string.
 *         On failure, NULL.
 */
char *str_concat(char *s1, char *s2)
{
  char *concat;
  int len1 = 0, len2 = 0, i, j;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  while (s1[len1] != '\0')
    len1++;
  while (s2[len2] != '\0')
    len2++;

  concat = malloc(sizeof(char) * (len1 + len2 + 1));
  if (concat == NULL)
    return (NULL);

  for (i = 0; s1[i] != '\0'; i++)
    concat[i] = s1[i];
  for (j = 0; s2[j] != '\0'; j++)
    concat[i + j] = s2[j];

  concat[i + j] = '\0';
  return (concat);
}
