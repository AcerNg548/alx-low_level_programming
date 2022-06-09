#include <stdio.h>

/**
 * main - print the first 50 Fibonacci numbers; starting from 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 1;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 2342522426637636536722526177)
		{
			printf("%ld, ", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
