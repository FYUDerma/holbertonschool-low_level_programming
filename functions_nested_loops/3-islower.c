#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _islower - check for lowercase
 * @c : c will be defined for letter
 *
 * Description: Function _islower check if the caracter is a lowercase
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
