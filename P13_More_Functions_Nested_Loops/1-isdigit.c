#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if c is a digit
 * @c : c will be defined for input
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
