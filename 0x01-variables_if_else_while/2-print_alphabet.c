#include <stdio.h>
/**
 * main - Entry point
 * Describtion : print letters from a to z
 * Return: always 0
 */

int main(void)
{
	char alpha = 'a';
while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
return (0);
}
