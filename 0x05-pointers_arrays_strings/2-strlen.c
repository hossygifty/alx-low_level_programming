#include "main.h"

/**
 *_strlen - function to print the lenght of string
 *@s: char int
 *Return: the lenght of string 0
 */

int _strlen(char *s)
{
	int i = 0; /* start the count from 0 */

	for (; *s++;)
		i++;
	return (i);
}
