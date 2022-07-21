#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - uses recursion to prints a string
 * @s:points to string
 *
 * recursion
 * Return: void after success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
