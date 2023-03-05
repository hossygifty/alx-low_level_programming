#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9,
 *
 * Return: the number since 0 is up to 9
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48 ; number < 58 ; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		else
		{
			_putchar(number);
		}
		_putchar(10);
	}
}
