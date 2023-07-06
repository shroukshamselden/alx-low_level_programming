#include "main.h"
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
	return (0);
int i;

for (i = 2; i <= n / 2;i++)
{
	if (n % i == 0)
	{
		return (0);
	}
}
return (1);
}
