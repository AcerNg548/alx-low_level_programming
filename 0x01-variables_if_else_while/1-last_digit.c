#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 *main - Print the last digit of a randomly generated number
 *Tell whether it's greater than 5, less than 6 or 0. 
 * 
 *Return: Always 0.
 */

int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Last digit of %i is %i and is", n, (n % 10));

    if ((n % 10) == 0)
    {
        printf(" 0\n");
    }
    else if ((n % 10) > 5)
    {
        printf(" greater than 5\n");
    }
    else
    {
        printf(" less than 6 and not 0\n");
    }

return (0);

}
=======
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

	printf("Last digit of %i is %i and is", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("and is less than 6 and not 0\n")
	}
	else ((n % 10) == 0)
	{
		printf("and is 0\n")
	}

return (0);

}
>>>>>>> 565cf8068385d2f9d9b93115a6d4bcb3ad9a8b34
