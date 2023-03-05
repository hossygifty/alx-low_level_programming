#include "main.h"

/**
 * times_table - print the 9 time table, starting with 0
 *
 * Return: always 0
 */

void times_table(void)
{
	int x, i, z, a, y;

	for (x = 0 ; x <= 9 ; x++)
	{
		for (i = 0 ; i <= 9 ; i++)
		{
			z = x * y;
			if (z > 9)
			{
				a = z % 10;
				y = (a - z) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(y + '0');
				_putchar(a + '0');
			}
			else
			{
				if (i != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
	}
	_putchar('\n');
}
