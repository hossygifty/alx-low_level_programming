#include <stdio.h>

/**
 *main - function for printing two digit
 *
 *Return: always 0
 */

int main(void)
{
int i;
int j;
int n = 100;
for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j < n; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i + j != 197)
{
putchar(',');
putchar(' ');
}
else 
{
putchar(' ');
}
}
}
return (0);
}
