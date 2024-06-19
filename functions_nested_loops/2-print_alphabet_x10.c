#include <stdio.h>
#include "main.h"
/**
 * print_alphabet x10 - print a to z but 10 times
 * Description: Function print_alphabet print alphabet in uppercase from a to z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	while (i <10)
	{
		print_alphabet();
		i++;
	}
}
