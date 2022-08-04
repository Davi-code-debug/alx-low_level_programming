#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the arguments
 * @n: the argument int
 *
 * Return: 0 if n is 0 otherwise sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int ans = 0;

	if (n == 0)
		return(0);
	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		ans = ans + va_arg(sum, int);
	}
	va_end(sum);
	return (ans);
}

