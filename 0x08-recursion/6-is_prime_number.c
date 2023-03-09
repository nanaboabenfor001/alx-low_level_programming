#include <stdio.h>
#include "main.h"

/**
 * is_prime - checks if number is prime
 * @n: the number to check
 * @i: the divisor to check n against
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime(int n, int i)
{
    if (n % i == 0)
        return (0);
    if (i > n / 2)
        return (1);
    return (is_prime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
    if (n < 2)
        return (0);
    return (is_prime(n, 2));
}
