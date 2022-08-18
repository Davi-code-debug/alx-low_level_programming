#include "main.h"
/**
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n &= ~m;
	return (1);
}
