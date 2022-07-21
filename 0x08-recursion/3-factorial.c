#include <stdio.h>
#include "main.h"
/**
 * factorial - prints factorial of a number
 * @n: stores integer
 * i: variable constant
 *
 * prints factorial
 * Return: i if n is 0
 * RETURN: -1 if n is less than 0
 * return the factorial of the integer
 */
int factorial(int n)
{
	int i;

	i = 1;

	if (n == 0)
		return (i);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
