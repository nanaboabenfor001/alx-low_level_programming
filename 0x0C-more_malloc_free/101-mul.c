#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
        return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to compute the length of
 *
 * Return: the length of s
 */
int _strlen(char *s)
{
        int i;

        for (i = 0; s[i]; i++)
                ;
        return (i);
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number to multiply
 * @num2: the second number to multiply
 *
 * Return: a pointer to the result, or NULL if an error occurs
 */
char *mul(char *num1, char *num2)
{
        int len1 = _strlen(num1);
        int len2 = _strlen(num2);
        int *res;
        int i, j, carry, n1, n2, sum;

        if (len1 == 0 || len2 == 0)
                return (NULL);
        res = calloc(len1 + len2, sizeof(int));
        if (!res)
                return (NULL);
        for (i = len1 - 1; i >= 0; i--)
        {
                carry = 0;
                n1 = num1[i] - '0';
                for (j = len2 - 1; j >= 0; j--)
                {
                        n2 = num2[j] - '0';
                        sum = n1 * n2 + res[i + j + 1] + carry;
                        carry = sum / 10;
                        res[i + j + 1] = sum % 10;
                }
                if (carry)
                        res[i + j + 1] += carry;
        }
        while (*res == 0 && len1 + len2 > 1)
        {
                res++;
                len1 += len2;
        }
        num1[len1] = '\0';
        return (num1);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 98 if an error occurs
 */
int main(int argc, char **argv)
{
        char *num1, *num2, *result;

        if (argc != 3)
        {
                printf("Error\n");
                return (98);
        }
        num1 = argv[1];
        num2 = argv[2];
        if (*num1 == '0' || *num2 == '0')
        {
                printf("0\n");
                return (0);
        }
        for (; *num1; num1++)
                if (!_isdigit(*num1))
                {
                        printf("Error\n");
                        return (98);
                }
        for (; *num2; num2++)
                if (!_isdigit(*num2))
                {
                        printf("Error\n");
                        return (98);
                }
        result = mul(argv[1], argv[2]);
        if (!result)
        {
                printf("Error\n");
                return (98);
        }
        printf("%s\n", result);
        free(result);
        return (0);
}
