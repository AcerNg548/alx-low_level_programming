#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the last digit of a randomly generated number
 * Tell whether it's greater than 5, less than 6 or 0.
 * Return: Always 0.
 */

int main(void)
{
int(n);

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %i is %i and is ", n, (n % 10)\n);

if ((n % 10) > 5)
{
	printf("greater than 5"\n);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
	printf("less than 6 and not 0"\n);
}
else ((n % 10) == 0)
{
	printf(0\n);
}

return (0);
}
