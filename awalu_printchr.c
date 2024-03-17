#include <unistd.h>

/**
 * awalu_printchr - writes the character s to stdout
 * @s: The character to print
 * Return: Value of a character
 */
int awalu_printchr(char s)
{
	return (write(1, &s, 1));
}
