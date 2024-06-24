#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * swap_int - swap between a and b
 * @a : pointer a
 * @b : pointer b
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
