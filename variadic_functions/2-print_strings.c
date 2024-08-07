#include "variadic_functions.h"
/**
 * print_strings - Prints strings passed to the function separed by separators
 * @separator: A string that is used to separate strings
 * @n: number of unnamed parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
