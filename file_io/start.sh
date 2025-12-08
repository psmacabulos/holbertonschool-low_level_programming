#!/bin/bash
# start.sh - create empty scaffold files for C - File I/O project

# Exit immediately if a command fails
set -e

# Create header file
cat > main.h << 'EOF'
#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/* Function prototypes */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
EOF

# Create _putchar.c
cat > _putchar.c << 'EOF'
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
EOF

# Create empty source files
touch 0-read_textfile.c
touch 1-create_file.c
touch 2-append_text_to_file.c

echo "Scaffold complete: main.h, _putchar.c, and empty .c files created."
