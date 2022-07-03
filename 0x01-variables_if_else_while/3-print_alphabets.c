#include <stdio.h>

/**
 * main - Entry point
 * chl: contains alphabets in lowercase
 * chu: contains alphabest in uppercase
 *
 * prints out alphabets in lowercases and uppercasess
 * Return: 0 after success
 */

int main(void)
{
	char chl = 'a';
	char chu = 'A';

	while (chl <= 'z')
	{
		putchar(chl);
		chl++;
	}
	while (chu <= 'Z')
	{
		putchar(chu);
		chu++;
	}
	putchar('\n');

	return (0);
}
