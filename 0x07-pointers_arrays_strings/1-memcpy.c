#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @dest: destination memory
 * @src: memory where it copied
 * @n: numbers of byte
 * Return: copied memory with n and byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i ; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
