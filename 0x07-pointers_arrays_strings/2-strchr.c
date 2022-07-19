#include <stdio.h>
#include "main.h"
/**
 * _strchr - funtion that checks for a specified character
 * @s: pointer to string
 * @c: contains character to check for
 *
 * checks for specified character
 * Return: pointer to occurence of letter
 * Return: NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
		return (NULL);
}
