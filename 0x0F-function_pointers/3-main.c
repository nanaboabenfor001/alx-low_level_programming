#include <stdio.h>
#include "3-calc.h"

/**
 * main - performs simple arithmetic operations
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 *
 * Return: 0 on success, 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = f(num1, num2);

	printf("%d\n", result);

	return (0);
}
