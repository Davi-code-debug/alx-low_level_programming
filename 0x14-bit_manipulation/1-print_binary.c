#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
		print_binary(n >>= 1);
	_putchar((n & 1) + '0');
}
