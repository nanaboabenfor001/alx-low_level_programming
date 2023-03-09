#include "main.h"

/**
 * factorial - Returns the factorial of a number recursively.
 *
 * @n: The number to get the factorial of.
 *
 * Return: The factorial of the number.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}
