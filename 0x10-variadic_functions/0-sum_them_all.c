#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 * @...: the parameters to sum
 *
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    int sum = 0;
    unsigned int i;

    /* Initialize the va_list and iterate through the arguments */
    va_start(args, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }

    /* Clean up the va_list and return the sum */
    va_end(args);
    return sum;
}
