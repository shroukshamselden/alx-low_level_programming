#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
const char message[] = "It's turtles all the way down\n";
write(STDOUT_FILENO, message, sizeof(message) -1);
       	return (1);

}
