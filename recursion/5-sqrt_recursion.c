#include "main.h"

/**
 * _sqrt_recursion - Natural square
 * @n : number
 *
 * Return: The square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt_recursion(n - 1));
	}
}

