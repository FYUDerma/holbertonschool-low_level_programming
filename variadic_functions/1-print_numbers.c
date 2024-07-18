#include "variadic_functions.h"

/**
 * print_numbers - print all the numbers
 * @n: number of parameters
 * @separator: separator between numbers
 *
 * Return: return the sum of the parameters
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
