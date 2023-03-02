#include "main.h"

/**
 *rev_string - function that print reverse
 *@s: char int
 */

void rev_string(char *s)
{
	int a, i;

	i = 0;

	while (s[i] != '\0')
		i++;

	for (a = i - 1 ; a >= 0 ; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
