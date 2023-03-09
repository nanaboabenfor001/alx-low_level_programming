#include <stdio.h>
#include "main.h"

/**
 * sqrt_recursive - finds the natural square root of a number using recursion
 * @n: the number to find the square root of
 * @root: the current guess for the square root
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int sqrt_recursive(int n, int root)
{
    int square = root * root;

    if (square == n)
        return root;

    if (square > n)
        return -1;

    return sqrt_recursive(n, root + 1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return sqrt_recursive(n, 0);
}
