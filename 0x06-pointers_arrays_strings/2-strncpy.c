#include "main.h"

/**
 * *_strncpy - function that copies string
 * @dest: destination string
 * @src: source string
 * @n: number of string
 * Return: destinatiin string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
