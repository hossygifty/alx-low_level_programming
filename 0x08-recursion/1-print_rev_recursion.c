#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *
 * @s: string to be print
 */

void _print_rev_recursion(char *s)
{
	for (*s;)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
