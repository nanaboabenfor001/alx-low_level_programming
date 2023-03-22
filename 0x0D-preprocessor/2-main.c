#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the source file it was compiled
 * from to stdout using only `malloc()`, `free()`, and `exit()`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    const char *filename = __FILE__;
    size_t len = strlen(filename);
    char *str = malloc(len + 2);

    if (str == NULL)
    {
        exit(EXIT_FAILURE);
    }

    memcpy(str, filename, len);
    str[len] = '\n';
    str[len + 1] = '\0';
    fputs(str, stdout);
    free(str);

    return (EXIT_SUCCESS);
}
