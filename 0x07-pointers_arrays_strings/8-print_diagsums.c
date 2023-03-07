#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix of ints
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i, sum1 = 0, sum2 = 0;

    /* Calculate the sum of the first diagonal */
    for (i = 0; i < size; i++)
    {
        sum1 += *(a + i*size + i);
    }

    /* Calculate the sum of the second diagonal */
    for (i = 0; i < size; i++)
    {
        sum2 += *(a + i*size + (size-1-i));
    }

    /* Print the sums */
    printf("%d, %d\n", sum1, sum2);
}
