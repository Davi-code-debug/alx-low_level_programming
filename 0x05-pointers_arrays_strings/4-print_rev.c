#include <stdio.h>
#include "main.h"

/**
 * print_rev - function print character in reverse
 * @s: contains string
 * i: contains no for increment
 * p: contains address of string
 *
 * print character in reverse
 * Return: 0 after success
 */
void print_rev(char *s)
{
	int i;
	char *p = s;

	while (*p != '\0')
	{
		p++;
	}

	i = p - s;

	while (s[i] >= '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
