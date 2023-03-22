#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);

int main(void)
{
    char *str = "Hello, world!";
    int i = 0;

    while (str[i] != '\0') {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');

    free(str); /* free the memory allocated by malloc */

    return 0;
}

int _putchar(char c)
{
    return (write(1, &c, 1));
}
