#include "main.h"

/**
 * get_endianness - checks if little or big
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *e = (char *) &b;

	return (*e);
}
