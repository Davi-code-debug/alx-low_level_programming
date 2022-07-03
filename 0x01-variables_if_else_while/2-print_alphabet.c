#include <stdio.h>

/**
 * main - Entry point
 * ch: is the letter
 *
 * prints lowercase alphabets
 * Return: 0 after success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch"\n");
		ch++;
	}
	return (0);
}
