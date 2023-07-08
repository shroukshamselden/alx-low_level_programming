#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;
	int num;
	int i = 0;
	char *arg = argv[i];
	int j = 0;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		while (arg[j])
		{
			if (isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		num = atoi(arg);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
		printf("%d\n", sum);
		return (0);
}
