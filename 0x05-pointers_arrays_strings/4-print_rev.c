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

	i = 0;

	for (s[i] = '\0'; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
