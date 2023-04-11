#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file with the specified name and writes the
 *               contents of the given text to the file.
 * @filename: Name of the file to create.
 * @text_content: Text to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int fd, len, bytes_written;

    if (filename == NULL)
        return (-1);

    /* Open the file with rw------- permissions, truncate if exists, create if not */
    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
        return (-1);

    if (text_content != NULL)
    {
        /* Calculate length of text_content */
        for (len = 0; text_content[len]; len++)
            ;

        /* Write text_content to file */
        bytes_written = write(fd, text_content, len);
        if (bytes_written != len)
        {
            close(fd);
            return (-1);
        }
    }

    close(fd);
    return (1);
}
