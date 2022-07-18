#include <stdio.h>
#include "main.h"
/**
 * memset - fills n memory with b
 * @s: points to buffer
 * @b: replacing char
 * @n:
 * arr[n]: is an array with n bytes
 * i: contains integer
 *
 * replaces n bytes with a new character
 * Return: pointer after success 
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char arr[n];

	while (i <= n)
	{
		if (i % 10 )
		{
			_putchar(' ');
		}
		if (!(i % 10) && i)
		{
			_putchar('\n');
		}

		*s = b;
		_putchar(arr[i]);
		s = s + 1;
		i++;
	}
	return (s);
}
