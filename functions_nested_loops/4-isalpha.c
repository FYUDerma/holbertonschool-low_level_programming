#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isalpha - check for lowercase or uppercase
 * @c : c will be defined for letter
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
