#include "main.h"
#include <stdio.h>
/**
 * main - Testing the printf
 * Return: Number of characters printed
 */
int main(void)
{
	/*_printf("My hex number of 10 is: %i\n", 10);*/
	/*printf("My hex number of 10 is: %i\n", 10);*/

	int counter1;
	int counter2;

	char *name = "Awalu";
	char *day = "Monday";

	counter1 = printf("Hello %s today is %s\n", name, day);
	counter2 = _printf("Hello %s today is %s\n", name, day);

	printf("Actual_printf counted: %d\n", counter1);
	_printf("my_printf counted: %d\n", counter2);

	return (0);
}
