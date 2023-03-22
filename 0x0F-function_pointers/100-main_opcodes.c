#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
        int num_bytes;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        num_bytes = atoi(argv[1]);

        if (num_bytes < 0)
        {
                printf("Error\n");
                return (2);
        }

        print_opcodes((void *) main, num_bytes);

        return (0);
}

/**
 * print_opcodes - Prints the opcodes of a given function
 * @p: A pointer to the function
 * @num_bytes: The number of bytes to print
 *
 * Return: void
 */
void print_opcodes(void *p, int num_bytes)
{
        unsigned char *ptr = (unsigned char *) p;

        for (int i = 0; i < num_bytes; i++)
        {
                printf("%.2x", *(ptr + i));

                if (i < num_bytes - 1)
                        printf(" ");
        }

        printf("\n");
}
