#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @src: array to be copied
 * @dest: the new aray
 * Return: the pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
char *temp = dest;
while (*src != '\0')
	*dest++ = *src++;

*dest = '\0';
return (temp);
}
