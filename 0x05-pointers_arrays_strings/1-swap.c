#include <stdio.h>

/**
 * swap_int - function that swaps the value of integers
 * @a: first int
 * @b: second int
 *
 * swaps values of two int var
 * Return: 0 after success
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
