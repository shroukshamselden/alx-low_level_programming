#include "main.h"
/**
 * print_alphabet - prints letters in lowwer case
 * describtion: print from a to z)
 */
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
