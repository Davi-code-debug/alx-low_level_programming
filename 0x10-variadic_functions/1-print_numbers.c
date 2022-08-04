#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints the list of arguments
 * @separator: points to seperator
 * @n: number of arguments to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	int num;

	va_start(print, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(print, int);
		if (!(separator))
			printf("%d", num);
		else if (separator && i == 0)
			printf("%d", num);
		else
			printf("%s%d", separator, num);
	}
	printf("\n");
	va_end(print);
}
