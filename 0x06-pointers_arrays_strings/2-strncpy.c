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
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
