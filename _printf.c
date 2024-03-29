#include "main.h"

/**
 * _printf - Customize the standard printf function
 * @format: The format specifier
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;

	va_list mylist;

	va_start(mylist, format);

	if (format == NULL)
		return (-1);

	while (*format)
	{
		if (*format != '%')
		{
			char_print(format);
			i++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				char_print(format);
				i++;
			}
			else if (*format == 'c')
			{
				char mystr = va_arg(mylist, int);

				char_print(mystr);
				i++;
			}
		}
		format++;
	}
	va_end(mylist);
	return (i);

}
