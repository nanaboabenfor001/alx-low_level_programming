#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
  printf("%d\n", argc - 1);
  return (0);
}
