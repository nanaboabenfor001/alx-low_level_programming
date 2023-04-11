#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

void print_error(int code, const char *msg, const char *file) {
    dprintf(STDERR_FILENO, "Error: %s %s\n", msg, file);
    exit(code);
}

int main(int argc, char *argv[]) {
    int fd_from, fd_to; /* Move variable declarations to the top */
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        print_error(97, "Usage: cp file_from file_to", "");
    }

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1) {
        print_error(98, "Can't read from file", argv[1]);
    }

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (fd_to == -1) {
        print_error(99, "Can't write to file", argv[2]);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read) {
            print_error(99, "Can't write to file", argv[2]);
        }
    }

    if (bytes_read == -1) {
        print_error(98, "Can't read from file", argv[1]);
    }

    if (close(fd_from) == -1) {
        print_error(100, "Can't close fd", argv[1]);
    }

    if (close(fd_to) == -1) {
        print_error(100, "Can't close fd", argv[2]);
    }

    return 0;
}
