#include "main.h"

/**
 * *_memset - fills the first n bytes of the memeory area
 * pointed to by @s with the constant byte @c.
 * @s: a pointer to the memory area to be filled.
 * @b: the caracter to fill the memory area with.
 * @n: the number of bytes to be filles.
 *
 * Return: pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index  n; index++)
		memory[index] = value;

	return (memory);
}
