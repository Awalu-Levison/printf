#include "main.h"

/**
 * _printf - Customize the standard printf function
 * @format: The format specifier
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;

	va_list args;

	va_start(args, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			char_print(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			char_print(va_arg(args, int));
			i++;
			j++;
		}
		else if (format[i + 1] == 's')
		{
			char *mystr = va_arg(args, char *);

			int x = str_print(mystr);

			j += x;
			i++;
		}
		else if (format[i + 1] == '%')
		{
			char_print('%');
			i++;
			j++;
		}
		j += 1;
	}
	va_end(args);
	return (j);
}
