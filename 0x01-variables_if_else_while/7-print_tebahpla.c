 #include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char o;

	for (o = 'z' ; o >= 'a' ; o--)
		putchar(o);
	putchar('\n');
	return (0);
}
