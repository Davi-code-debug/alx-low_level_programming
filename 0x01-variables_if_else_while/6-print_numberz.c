#include <stdio.h>
/**
 * main - Entry point
 * no: contains number
 *
 * print num with putchar
 * Return: 0 after success
 */
int main(void)
{
	char no = 0;

	while (no < 10)
	{
		putchar(no);
		no++;
	}
	putchar('\n');

	return (0);
}
