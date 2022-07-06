#include "main.h"



/**
 * print_alphabet - prints the alphabet in lowercasess followed by a new line
 *
 * prints alphabets in lowercase
 *Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
