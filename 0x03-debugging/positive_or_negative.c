#include "main.h"

/**
 * positive_or_negative - print negative or positive
 * @i: parameter of numbers
 * Return: alway 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
