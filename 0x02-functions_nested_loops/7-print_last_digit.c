#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a random number
 * @ldn: last digit of a number
 * Return: value of the last digit of a number
 */
int print_last_digit(int ldn)
{
	int pld;

	pld = (ldn % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	{
	return (pld);
	}
}
