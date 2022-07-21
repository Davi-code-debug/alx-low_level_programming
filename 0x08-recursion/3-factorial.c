#include <stdio.h>
#include "main.h"
/**
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
