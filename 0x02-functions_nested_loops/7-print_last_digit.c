#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the digit
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int l;

	l = (n % 10);

	if
(n < 0)
{
	n = -n;
}
	if
(l < 0)
	l = -l;
_putchar(l + '0');
return (l);
}
