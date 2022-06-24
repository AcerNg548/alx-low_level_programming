#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that give a factorial of a given number.
 * @n: the number to find the factorial of
 *
 * if n is less than 0 return -1.
 * if n is 0 return 1.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	result *= factorial(n - 1);

	return (result);
}
