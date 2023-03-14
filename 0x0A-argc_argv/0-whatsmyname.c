#include <stdio.h>
#include "main.h"

/**
 * print_program_name - Prints the name of the program
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: void
 */
void print_program_name(int argc, char *argv[])
{
    printf("%s\n", argv[0]);
}

int main(int argc, char *argv[])
{
    print_program_name(argc, argv);
    return (0);
}
