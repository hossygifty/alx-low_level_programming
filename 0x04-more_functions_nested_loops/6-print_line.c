#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *@n: value check
 * Return: always 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
