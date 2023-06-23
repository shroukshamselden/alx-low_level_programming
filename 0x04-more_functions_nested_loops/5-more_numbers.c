#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: always (0)
 */

void more_numbers(void)
{
	int l;
	int n;

for (l = 0; l < 10; l++)
{
for (n = 0; n <= 14; n++)
{
	if (n >= 10)
	{
		_putchar('1');
	}
	_putchar('0' + n % 10);
}
_putchar('\n');
}
}
