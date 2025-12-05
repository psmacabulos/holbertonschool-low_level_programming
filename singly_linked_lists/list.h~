#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - maps format symbol to print function
 * @symbol: format character
 * @print: function to print corresponding type
 */
typedef struct printer
{
	char symbol;
	void (*print)(va_list *);
} printer_t;


#include <stddef.h>


#endif /* MAIN_H */
