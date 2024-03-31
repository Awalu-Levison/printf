#include "main.h"
/**
 * str_print - Print string given by user
 * @mystr: String passed to the function
 * Return: Number of characters printed
 */
int str_print(char *mystr)
{
	unsigned int i, counter = 0;

	if (mystr == NULL)
		return (-1);

	else
	{
		i = write(1, mystr, length_str(mystr));
		counter += i;
	}
	return (counter);
}
