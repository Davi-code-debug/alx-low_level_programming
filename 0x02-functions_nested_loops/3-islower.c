#include "main.h"
/**
 * _islower - displays the value of lower and uppercases
 *c: contains the letter
 *
 * display the return value of c
 * Return: 0 after success
 */
int _islower(int c)
{
	char il

	il = 'H';
	c = _islower(il);
	_putchar(c + '0');
	il = 'o';
	c = _islower(il);
	_putchar(c + '0');
	il = '108';
	c = _islower(il);
	_putchar(c + '0');
	_putchar('\n');

	return (0);
}
