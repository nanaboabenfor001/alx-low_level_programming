#!/bin/bash

# Compile all the .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create the static library from the object files
ar -rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the object files
rm *.o
