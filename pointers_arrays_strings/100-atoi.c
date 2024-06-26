#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _atoi - convert all sprint in integer
 * @s : string
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s) 
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			/* Print nothing */
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			result = result * 10 + (*s - '0');
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return sign * result;
}
