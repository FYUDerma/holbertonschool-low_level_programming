#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - check for uppercase
 * @c : c will be defined for letter
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
