#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - Print alphabets in lower caes a - z 
 * Return: Always ) (Success)
 */

int main(void)
{
    char alpha = 'a';

    while (alpha <= 'z')
    {
        putchar(alpha);
        alpha++;
    }
    putchar('\n');

    return(0);
}