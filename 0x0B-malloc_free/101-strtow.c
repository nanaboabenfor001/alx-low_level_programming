#include "main.h"
#include <stdlib.h>
#include <string.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str != '\0')
    {
        if (is_space(*str))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **strtow(char *str)
{
    int i, j, k, n_words;
    char **words;

    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    n_words = count_words(str);
    words = malloc(sizeof(char *) * (n_words + 1));

    if (words == NULL)
    {
        return NULL;
    }

    for (i = 0; i < n_words; i++)
    {
        while (is_space(*str))
        {
            str++;
        }

        for (j = 0; str[j] != '\0' && !is_space(str[j]); j++)
            ;

        words[i] = malloc(sizeof(char) * (j + 1));

        if (words[i] == NULL)
        {
            for (k = 0; k < i; k++)
            {
                free(words[k]);
            }
            free(words);
            return NULL;
        }

        for (j = 0; str[j] != '\0' && !is_space(str[j]); j++)
        {
            words[i][j] = str[j];
        }
        words[i][j] = '\0';

        str += j;
    }

    words[n_words] = NULL;
    return words;
}
