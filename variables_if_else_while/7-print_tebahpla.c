#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int small_letters = 122;

while (small_letters >= 97)
{
putchar(small_letters);
small_letters--;
}
putchar('\n');
return (0);
}
