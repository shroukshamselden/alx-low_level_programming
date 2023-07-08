#include "main.h"
/**
 * _isalpha - check for alphabet
 * @c: is the alphabet
 * Return: 1 if it is alphabet, 0 if else
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
