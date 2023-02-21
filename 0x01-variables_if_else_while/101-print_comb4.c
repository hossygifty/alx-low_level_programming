#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int o;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (o = 2 ; o < 10 ; o++)
			{
				if (i < j && j < o)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(o + '0');
					if (i + j + o != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
