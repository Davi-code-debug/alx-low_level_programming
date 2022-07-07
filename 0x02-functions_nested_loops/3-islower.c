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
	char il[2] = "H";
	char il1[2] = "o";
	char il2[2] = "l";

	c = _islower(il[0]);
	_putchar(c + '0');
	c = _islower(il1[0]);
	_putchar(c + '0');
	c = _islower(il2[0]);
	_putchar(c + '0');
	_putchar('\n');

	return (0);
}
