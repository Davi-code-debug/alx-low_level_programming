#include <stdio.h>
#include "main.h"
/**
 * _puts - performs the function of put
 * @n: contains the string
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
}
