#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched.
 * @c: string to be located.
 *
 * Return: if c is found *a pointer to the first occurence*
 * if not found *NULL*.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
