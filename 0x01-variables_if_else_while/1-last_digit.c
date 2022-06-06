#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the last digit of a randomly generated number
 * and if it's grater then 5, less than 6 or 0
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */

	if ((n % 10) > 5)
	{
		printf("Last digit of%dis%dand is greater than 5\n");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of%dis%dand is less than 6 and not 0\n")
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of%dis%dand is 0\n")
	}

return (0);

}
