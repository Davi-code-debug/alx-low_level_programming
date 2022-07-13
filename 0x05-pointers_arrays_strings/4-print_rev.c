#include <stdio.h>
#include "main.h"

/**
 * print_rev - function print character in reverse
 * @s: contains string
 * i: contains no for increment
 *
 * print character in reverse
 * Return: 0 after success
 */
void print_rev(char *s)
{
	int i;

	s[i] = '\0';

	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
