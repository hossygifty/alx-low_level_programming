#include "main.h"

/**
 *print_rev - function to print string in rev
 *@s: char string
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;

	while (s[j] != '\0')
		j++;

	for (i = j - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
