#include "main.h"
#include <stdio.h>

/**
 * times_table - prints every tables
 */
void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;

			if (result >= 10)
			{
				_putchar('0' + (result / 10));
			}
			else
			{
				if (y != 0)
				{
					_putchar(' ');
				}
			}
			_putchar('0' + (result % 10));

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


}
