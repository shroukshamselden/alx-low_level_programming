#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int u;
	int con = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (u = 63; u >= 0; u--)
	{
		curr = exclusive >> u;
		if (curr & 1)
			con++;
	}

	return (con);
}
