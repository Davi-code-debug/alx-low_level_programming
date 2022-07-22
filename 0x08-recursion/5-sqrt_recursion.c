#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - calls the function _sqrt
 * @n: stores integer
 *
 * calls a function
 * Return: -1 if n is less than 0
 * return recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return _sqrt(n, 0);
}

/**
 * _sqrt - gets the square root of n
 * @n: stores the ineger
 * @i: increments andis the root of n
 *
 * finds square root
 * returns -1 if i * i > n
 * Return: i after success
 * returN recursion
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
		return (i);
	return (_sqrt(n, (i + 1)));
}
