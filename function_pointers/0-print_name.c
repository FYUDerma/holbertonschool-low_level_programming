#include "main.h"
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: name to print
 * @f: string
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL || name != NULL)
	{
		f(name);
	}
}
