#include "main.h"



/**
 *print_alphabet_x10 - prints lowercases a to z 10 times.
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int no = 0;
	char ch = 'a';

	while (no <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	}
}
