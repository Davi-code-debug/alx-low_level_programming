#include <stdio.h>
/**
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
