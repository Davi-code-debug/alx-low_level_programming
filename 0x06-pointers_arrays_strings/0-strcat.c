#include <stdio.h>
#include "main.h"
/**
 * _strcat - appends two strings
 * @dest: stores first string
 * @src: stores second string
 *
 * appends strings
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int v;

	i = 0;
	v = 0;

	while (dest[i] < '\0')
	{
		_putchar(dest[i]);
		i++;
	}

	while (src[v] <= '\0')
	{
		_putchar(src[v]);
		v++;
	}

	return dest;
}	
