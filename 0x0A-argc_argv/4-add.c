#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
    int i, j, sum;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    sum = 0;
    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (0);
}
