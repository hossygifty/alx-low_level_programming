#include "main.h"

/**
 * jack_bauer - function that print time
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int o;
	int i;

	for (o = 0 ; o < 24 ; o++)
	{
		for (i = 0 ; i < 60 ; i++)
		{
			_putchar(o / 10 + '0');
			_putchar(o % 10 + '0');
			_putchar(':');
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar('\n');
		}
	}
}
