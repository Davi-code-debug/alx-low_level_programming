#include "main.h"



/**
 *print_alphabet_x10 - prints lowercases a to z 10 times.
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int no = 0;
	char ch;

	while (no <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	no++;
	_putchar('\n');
	}
}
