#include "main.h"

/**
 * get_endianness - checks  little or big
 * Return: 0  big, 1 little
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *e = (char *) &b;

	return (*e);
}
