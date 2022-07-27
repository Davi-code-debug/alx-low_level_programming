#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - creates an array for c
 * @size: the number of arrays
 * @c: the character
 *
 * creates an array of characters
 * Return: a pointer to the array created
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ch + i) = c;
	}
	return (ch);
}
