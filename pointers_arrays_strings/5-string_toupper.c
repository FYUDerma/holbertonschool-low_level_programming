#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change from lowercase to Uppercase
 * @s : string
 *
 * Return: Uppercase letter
 */

char *string_toupper(char *s)
{
	char *temp = s;

	while (*temp)
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp -= 32;
		}
		temp++;
	}
	return (s);
}
