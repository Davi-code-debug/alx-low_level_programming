#include <stdio.h>
/**
 * main -entry point
 * alp: contains alphabet
 *
 * prints out the alphabets excluding q & e
 * Return: 0 after success
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'q' && alp != 'e')
		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
