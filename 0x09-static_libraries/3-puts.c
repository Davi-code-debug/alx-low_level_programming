#include <stdio.h>
#include "main.h"
/**
 * _puts - performs the function of put
 * @str: contains the string
 * i: contains the no
 *
 * prints out a string
 * Return:void
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
