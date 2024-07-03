#include "main.h"

/**
 * _sqrt_recursion - Natural square
 * @n : number
 *
 * Return: The square root
 */

/**
 * _sqrt_helper - helper function to find the natural square root
 * @n: the number to calculate the square root of
 * @guess: the current guess for the square root
 *
 * Return: the natural square root, or -1 if not found
 */

int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt_helper(n, 0));
}

int _sqrt_helper(int n, int guess)
{
    if (guess * guess > n)
        return (-1);
    if (guess * guess == n)
        return (guess);
    return (_sqrt_helper(n, guess + 1));
}
