#include "main.h"

/**
 * print_alphabet_x10 - function that print 10x alphabets
 *
 *Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char k;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (k = 'a' ; k <= 'z' ; k++)
			_putchar(k);
		_putchar('\n');
	}
}

