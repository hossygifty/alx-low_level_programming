#include <stdio.h>

/**
 *main - function for printing two digit
 *
 *Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 100 ; i++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar('\n');
	}
	return (0);
}
