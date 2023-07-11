#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int total_len;
int index;
int i;
char *str;
int len;

if (ac == 0 || av == 0)
	return (NULL);
total_len = 0;
for (i = 0; i < ac; i++)
	total_len += strlen(av[i]) + 1;

str = (char *)malloc(total_len *sizeof(char));
if (str == NULL)
	return (NULL);

index = 0;
for (i = 0; i < ac; i++)
{
	len = strlen(av[i]);
	memcpy(str + index, av[i], len);
	index += len;
		str[index++] = '\n';
}
str[index - 1] = '\0';
return (str);
}
