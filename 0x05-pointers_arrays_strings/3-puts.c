#include <stdio.h>
/**
 * _puts - performs the function of put
 * @n: contains the string
 *
 * prints out a string
 * Return:void
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(p);
		p++;
	}
}
