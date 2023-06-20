#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Describtion: last digit
 * Return: always (0)
 */
int main(void)
{
	int n;
	int lt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lt = (n % 10);
	if (lt == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lt);
	}
	else
	{
		if (lt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lt);
	}
		else
		{
		if (lt < 5)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lt);
		}
	}
	return (0);
}
