#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	
	while (alpha <= 'z')
	{
		-putchar (alpha);
		alpha++;
	}
	-putchar('\n');
}
