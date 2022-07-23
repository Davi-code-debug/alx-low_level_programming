#include <stdio.h>
#include "main.h"
/**
 * _strncat - appends two strings
 * @dest: string1
 * @n: src byte
 * @src: string2
 * i: increment of string
 *
 * appends two strings
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	dest[i + n] = src[n];

	return dest;
}
