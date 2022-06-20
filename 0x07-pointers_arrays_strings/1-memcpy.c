#include "main.h"
#include <stdio.h>

/**
 * _memcpy: copies @n bytes from the memory pointed to by
 * @src into that pointed by @dest.
 * @dest: a pointer to the memory area to copy @src into.
 * @src: the source bi]uffer to copy characters from.
 * @n: the number of bytes to copy from @src.
 *
 * Return:  a pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *destination = dest;
	char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];
	return (dest);
}
