#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy strings
 * @dest: destination
 * @src: source
 * @n: contains increment
 * ptr: contains char
 *
 * copies strings
 * Return: char after success
 */
char *_strncpy(char *dest, char *src, int n)
{
	if (dest == NULL)
	{
		return (NULL);
	}

	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
