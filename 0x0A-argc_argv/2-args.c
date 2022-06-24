#include <stdio.h>

/**
 * main - it prints all arguments it receives
 * including the first argument and the outputs should be on a new line.
 * argc -  the number of arguement to be printed.
 * argv - array of pointers to the arguement.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
