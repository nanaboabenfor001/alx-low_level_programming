#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using the given function pointer
 *
 * @name: name to be printed
 * @f: function pointer to the function that will print the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
