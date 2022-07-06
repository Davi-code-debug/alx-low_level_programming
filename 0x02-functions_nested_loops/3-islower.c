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
	c = _islower('H');
	_putchar(c + '0');
	c = _islower('o');
	_putchar(c + '0');
	c = _islower(108);
	_putchar(c + '0');
	_putchar('\n');

	return (0);
}
