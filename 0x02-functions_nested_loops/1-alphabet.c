#include <stdio.h>
/**
 * main - Entry point
 * alp: contains alphabets
 *
 * prints alpbaets in lowercase
 * Return: 0 after success
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
