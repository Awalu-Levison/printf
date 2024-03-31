#include "main.h"
/**
 * handle_format - Dealing with the specifier
 * given by the user
 * @format: Specifier given by user
 * @mylist: Variable number of arguments
 * passed to the function
 * Return: Number of characters printed
 */
int handle_format(const char *format, va_list mylist)
{
	unsigned int i = 0;

	if (*format == 'c')
	{
		i += char_print(va_arg(mylist, int));
	}
	else if (*format == 's')
	{
		i += str_print(va_arg(mylist, char *));
	}
	else if (*format == '%')
	{
		i += char_print('%');
	}
	else if (*format == 'd' || *format == 'i')
	{
		get_int(va_arg(mylist, int));
	}
	return (i);
}
