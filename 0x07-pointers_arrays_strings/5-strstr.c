#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: the substring to be searched.
 * @needle: the substring to be located.
 *
 * return: if the substring is located - a pointer to the beginning of the
 * located substring.
 * if the substring is not located - NULL.
 */
char *_strstr(char *haystack, char *neddle)
{
	int index;

	if (*neddle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0'])
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
