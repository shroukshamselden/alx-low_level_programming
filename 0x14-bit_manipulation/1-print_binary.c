#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, cou = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			_putchar('1');
			cou++;
		}
		else if (cou)
			_putchar('0');
	}
	if (!cou)
		_putchar('0');
}
