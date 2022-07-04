#include <stdio.h>
/**
 * main - Entry point
 * num: contains numbers
 *
 * prints number from 0 to 9
 * Return: 0 after success
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}

	return (0);
}

