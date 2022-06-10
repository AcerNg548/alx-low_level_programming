#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Print lowecase alphabets a-z
 *Return: Always 0
 **/
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
