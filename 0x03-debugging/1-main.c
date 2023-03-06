#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates how to comment out code to prevent an
 *              infinite loop. It prints a message to the screen, sets a counter
 *              to zero, and then enters a while loop that increments the counter
 *              until it reaches 10, at which point it prints another message and
 *              exits the loop.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        /*
         * Commenting out the code causing the infinite loop
         *
         * while (i < 10)
         * {
         *         putchar(i);
         * }
         */

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
