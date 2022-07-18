#include <stdio.h>
#include "main.h"
/**
 * _strchr - funtion that checks for a specified character
 * @s: pointer to string
 * @c: contains character to check for
 * i: increments
 * v: new array
 *
 * checks for specified character
 * Return: pointer to occurence of letter
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *v[i];

	for (i = 0; *(v[i]) != '\0'; i++)
	{
		*v[i] = *(s + i);
		if (*(v[i]) = c)
		return (v[i]);
	else
		return (NULL);
	}
}
