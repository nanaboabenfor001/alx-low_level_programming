#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0
 */
int main(void)
{
    int i = 0;
    char *file_name = __FILE__;

    while (file_name[i] != '\0')
    {
        _putchar(file_name[i]);
        i++;
    }
    _putchar('\n');
    return (0);
}

/**
 * _putchar - writes a character to stdout
 *
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
