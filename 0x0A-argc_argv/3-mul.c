#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if there are not enough arguments
 */
int main(int argc, char *argv[])
{
  int num1, num2, result;

  if (argc != 3)
  {
    printf("Error\n");
    return 1;
  }

  num1 = atoi(argv[1]);
  num2 = atoi(argv[2]);
  result = num1 * num2;

  printf("%d\n", result);

  return 0;
}
