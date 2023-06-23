#include "main.h"
/**
 * print_line - draws a line
 * @n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	int i;
while (i < n)
{
	_putchar('_');
	i++;
}
_putchar('\n');

}
