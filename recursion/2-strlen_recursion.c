#include "main.h"

/**
 * _strlen_recursion - print the lenght of a string
 * @s : string
 *
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
