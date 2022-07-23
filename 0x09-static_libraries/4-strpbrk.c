#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - prints the first occurrence of any
 * accept bytes in s
 * @s: points to string
 * @accept: points to substring
 * i: increments
 *
 * checks for any occurrence of accept bytes
 * in s
 * Return: s if there is any occurrence
 * returns null if none
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;

	while (accept[i] != '\0')
	{
		i++;
		if (*s == accept[i])
			return (s);
		s++;
	}
	return (NULL);
}
