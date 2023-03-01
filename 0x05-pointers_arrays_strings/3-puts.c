#include "main.h"

/**
 *_puts - function to print total of string
 *@str: string char
 *Return: the value of the string
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
