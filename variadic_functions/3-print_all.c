#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @args: pointer to va_list containing the character
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_int - prints an integer
 * @args: pointer to va_list containing the integer
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_float - prints a float
 * @args: pointer to va_list containing the float
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - prints a string, or (nil) if NULL
 * @args: pointer to va_list containing the string
 */
void print_string(va_list *args)
{
	char *s = va_arg(*args, char *);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints arguments based on format string
 * @format: list of types of arguments passed
 *
 * Description: Supported format characters:
 * 'c' - char, 'i' - int, 'f' - float, 's' - string
 * Separator ", " is printed between values.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *sep = "";
	printer_t printers[] = {
		{'c', print_char}, {'i', print_int},
		{'f', print_float}, {'s', print_string},
		{0, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (printers[j].symbol)
		{
			if (format[i] == printers[j].symbol)
			{
				printf("%s", sep);
				printers[j].print(&args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
