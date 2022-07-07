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
	char il = 'H';
	char il1 = 'o';
	char il2 = 'l';

	c = _islower(il);
	_putchar(c + '0');
	c = _islower(il1);
	_putchar(c + '0');
	c = _islower(il2);
	_putchar(c + '0');
	_putchar('\n');

	return (0);
}
