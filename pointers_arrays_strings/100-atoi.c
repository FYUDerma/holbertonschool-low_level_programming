#include <stdio.h>
#include "main.h"
#include <limits.h>
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
	int digit;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s == '+')
		{
			/* Print nothing */
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			digit = *s - '0';

			if (sign == 1)
			{
				if (result > (INT_MAX - digit) / 10)
				{
					return (INT_MAX);
				}
			}
			else
			{
				if (result > (INT_MAX - digit) / 10)
				{
					return (INT_MIN);
				}
			}

			result = result * 10 + digit;
		}
		else if (started)
			break;
		s++;
	}
	return (sign * result);
}
