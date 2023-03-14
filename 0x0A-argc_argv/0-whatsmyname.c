#include <stdio.h>
#include <stdlib.h>

/* Declare the __progname variable */
extern char *__progname;

/**
 * main - Entry point
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    /* Print the program name using the __progname variable */
    printf("%s\n", __progname);

    return (EXIT_SUCCESS);
}
