#include "main.h"

/**
 * swap_int - swap the val of 2 int
 * @a: parameter 1
 * @b: parameter 2
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
