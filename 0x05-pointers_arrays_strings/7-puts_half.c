#include"main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input
 * Return: 0
 */
void puts_half(char *str)
{
int len;
char *p = str;
int start;

while
	(*p != '\0')
	{
		len++;
		p++;
	}
start = len / 2;
if
	(len % 2 == 1)
	{
	start++;
	}
while
	(str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
_putchar('\n');
}
