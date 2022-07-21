#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - prints integer to a specified power
 * @x: stores integer
 * @y: stores power
 *
 * prints the value of an integer to a power
 * return -1 if y is less than 0
 * rEturn 1 if y is 0
 * Return: value of integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
