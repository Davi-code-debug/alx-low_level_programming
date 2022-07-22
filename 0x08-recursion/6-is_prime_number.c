#include <stdio.h>
#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - calls funtion _prime()
 * @n: stores integer
 *
 * calls a function
 * Return: 0 if n is less than 0
 * else calls function _prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}

/**
 * _prime - checks for prime number
 * @n: stores integer
 * @i: increment
 *
 * checks prime number
 * returns 1 if i is n or n is 1
 * Return: 0 when i divides n without a remainder
 */
int _prime(int n, int i)
{
	if ((i == n) || (n == 1))
		return (1);
	if (!(n % i))
		return (0);
	return (_prime(n, (i + 1)));
}
