#include "main.h"

/**
 * factorial - put a number to it factorial
 * @n : number
 *
 * Return: the factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
