# C - File I/O

This project is part of the Holberton curriculum. It introduces low-level file operations in C using system calls (`open`, `read`, `write`, `close`) instead of standard library functions.

## Files

- `main.h` — Header file with function prototypes and required includes.
- `_putchar.c` — Helper function to write a single character to stdout.
- `0-read_textfile.c` — Function that reads a text file and prints it to stdout.
- `1-create_file.c` — Function that creates a file with given content.
- `2-append_text_to_file.c` — Function that appends text at the end of a file.

## Function Prototypes

```c
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);