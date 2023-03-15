#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
  int i;

  for (i = 0; i < argc; i++)
  {
    printf("%s\n", argv[i]);
  }
  return 0;
}
