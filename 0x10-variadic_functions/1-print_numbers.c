#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    char *buf;
    unsigned int i, j, k, len;

    /* Calculate the total length of the output string */
    len = 0;
    va_start(args, n);
    for (i = 0; i < n; i++) {
        int num = va_arg(args, int);
        unsigned int digits = num == 0 ? 1 : 0;
        while (num != 0) {
            digits++;
            num /= 10;
        }
        len += digits;
    }
    va_end(args);
    if (separator != NULL && n > 1) {
        len += (n - 1) * strlen(separator);
    }

    /* Allocate memory for the output string */
    buf = malloc(len + 1);
    if (buf == NULL) {
        exit(EXIT_FAILURE);
    }

    /* Format the output string */
    va_start(args, n);
    j = 0;
    for (i = 0; i < n; i++) {
        int num = va_arg(args, int);
        unsigned int digits = num == 0 ? 1 : 0;
        while (num != 0) {
            digits++;
            num /= 10;
        }
        for (k = 0; k < digits; k++) {
            buf[j + k] = '0' + ((num / (unsigned int)pow(10, digits - k - 1)) % 10);
        }
        j += digits;
        if (separator != NULL && i != n - 1) {
            for (k = 0; k < strlen(separator); k++) {
                buf[j + k] = separator[k];
            }
            j += strlen(separator);
        }
    }
    va_end(args);

    /* Print the output string */
    buf[len] = '\0';
    write(STDOUT_FILENO, buf, len);
    free(buf);
}
