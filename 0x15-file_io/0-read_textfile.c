#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    char *buffer;
    ssize_t read_bytes, written_bytes;

    if (filename == NULL)
        return (0);

    file = fopen(filename, "r");
    if (file == NULL)
        return (0);

    buffer = malloc(sizeof(char) * (letters + 1));
    if (buffer == NULL)
    {
        fclose(file);
        return (0);
    }

    read_bytes = fread(buffer, sizeof(char), letters, file);
    if (read_bytes < 0)
    {
        fclose(file);
        free(buffer);
        return (0);
    }

    written_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);
    if (written_bytes < read_bytes)
    {
        fclose(file);
        free(buffer);
        return (0);
    }

    fclose(file);
    free(buffer);

    return (written_bytes);
}
