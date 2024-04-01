#include "main.h"
/**
 * str_print - Print string given by user
 * @mystr: String passed to the function
 * Return: Number of characters printed
 */
int str_print(char *mystr)
{
	int counter;

	counter	= 0;
	while (*mystr != '\0')
	{
		char_print((int)*mystr);
		counter++;
		mystr++;
	}
	return (counter);
}
