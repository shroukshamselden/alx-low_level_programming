#include <unistd.h>
/**
 *main - Entry point
 * Return: 0
 */

int main(void)
{
	char *msg = "and that piece of art is useful\n";

	write(2, msg, 31);
	return (1);

}
