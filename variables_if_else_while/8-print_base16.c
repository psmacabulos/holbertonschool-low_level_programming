#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int small_numbers = 48; small_numbers <= 57; small_numbers++)
{
putchar(small_numbers);
}
for (int hexa = 97; hexa <= 102; hexa++)
{
putchar(hexa);
}
putchar('\n');
return (0);
}
