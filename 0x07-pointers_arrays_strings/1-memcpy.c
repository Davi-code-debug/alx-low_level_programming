#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies data in bytes from source to destination
 * @dest: address of destination
 * @src: address of source
 * @n: number of bytes
 * i: increment
 *
 * copies data from one memory to another
 * Return: dest after success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(src + i) = *(dest + i);
	}
	return (dest);
}

