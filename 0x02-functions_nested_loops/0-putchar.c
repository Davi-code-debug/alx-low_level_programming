#include <stdio.h>
/**
 * main- Entry point
 * var: contains putchar string
 *
 * prints putchar
 * Return: 0 after success
 */
int main(void)
{
	int car;
	char var[10] = "_putchar";

	for (car = 0; var[car] != '\0'; car++)
	putchar(var[car]);
	putchar('\n');
	return (0);
}
