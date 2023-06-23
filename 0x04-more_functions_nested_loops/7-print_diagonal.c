#include "main.h"
/**
 * print_diagonal  - draws a diagonal line
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 0;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	}
}
