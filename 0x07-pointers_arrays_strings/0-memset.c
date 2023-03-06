#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: number of byte to be changed
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0 ; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
