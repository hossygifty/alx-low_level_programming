#include <stdio.h>

/**
 * main - the functions
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int o;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (o = 1 ; o < 10 ; o++)
		{
			for (j = 2 ; j < 10 ; j++)
			{
				if (i < o && o < j)
				{
					putchar(i + '0');
					putchar(o = '0');
					putchar(j + '0');
					if (i + o + j != 24)
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
