#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else if (n == 0 || n == 1)
	return (n);
else
{
	int i;

	for (i = 1; i <= n / 2; i++)
	{
		int square = i * i;

		if (square == n)
		{
			return (i);
		}
		else if (square > n)
		{
			return (-1);
		}
	}
	return (-1);
}
}
