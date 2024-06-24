#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print 0 to 14 10 times
 * 
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	char y;
	int x = 0;

	while (x <= 10)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar('0' + (y / 10));
			}
			_putchar('0' + (y % 10));
		}
		_putchar('\n');
		x++;
	}
}
