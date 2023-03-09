#include "main.h"

/**
 * fatorial - function that returns the factorial of a given number
 * @n: number to return the factorial from
 * Return: factorial n
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
