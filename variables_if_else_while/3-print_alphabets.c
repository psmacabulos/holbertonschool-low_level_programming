#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int small_letters = 97;
int big_letters = 65;
while (small_letters <= 122)
{
putchar(small_letters);
small_letters++;
}
while (big_letters <= 90)
{
putchar(big_letters);
big_letters++;
}
putchar('\n');
return (0);
}
