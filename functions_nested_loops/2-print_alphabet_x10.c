#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print a to z but 10 times
 * Description: Function print_alphabet print alphabet in uppercase from a to z
 * 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z' ; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
