#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints all the strings
 * @separator: pointer to the separator string
 * @n: number of argument
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	char *num;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(print, char *);

		if (num == NULL)
			num = "(nil)";
		else if (!separator)
			printf("%s", num);
		else if (separator && i == 0)
			printf("%s", num);
		else
			printf("%s%s", separator, num);
	}
	printf("\n");
	va_end(print);
}
