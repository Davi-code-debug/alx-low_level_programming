#include <stdio.h>

/**
 * reset_to_98 - resets the pointer
 * @n: contains the address of p
 *
 * resets number to 98
 * Return: 0 after success
 */
void reset_to_98(int *n)
{
	int p;

	n = &p;
	*n = 98;
}
