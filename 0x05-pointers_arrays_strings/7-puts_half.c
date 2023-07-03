#include"main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int len = 0;
int n;
int start;

for (n = 0; str[n] != '\0'; n++)
	len++;
start = (len / 2);
if
	(len % 2 == 1)
	{
	start = ((len + 1) / 2);
	}

for (n = start; str[n] != '\0'; n++)
	_putchar(str[n]);
_putchar('\n');
}
