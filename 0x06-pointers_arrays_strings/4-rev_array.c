#include "main.h"

/**
 * reverse_array - function that reverse the array of an integers
 * @a: input value
 * @n: input value
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0 ; i < n-- ; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
