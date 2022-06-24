#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed to it.
 * folloewd by a new line.
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
