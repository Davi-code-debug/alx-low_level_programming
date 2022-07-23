#include <stdio.h>
#include "main.h"
/**
 * _memset - fills n memory with b
 * @s: points to buffer
 * @b: replacing char
 * @n: number of bytes
 * i: contains integer
 *
 * fills n bytes with a new character
 * Return: pointer after success
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
