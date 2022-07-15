#include <stdio.h>
#include "main.h"
/**
 * _strcat - appends two strings
 * @dest: stores first string
 * @src: stores second string
 * i: con value for des
 * v: con value for src
 *
 * appends strings
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int v;

	i = 0;
	v = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[v] != '\0')
	{
		dest[i + v] = src[v];
		v++;
	}

	return dest;
}	
