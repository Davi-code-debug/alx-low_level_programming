#include <stdio.h>
#include <string.h>
/**
 * _strlen - calc length of string
 * @s: contains string
 *
 * calcs length of string
 * Return: length after success
 */
int _strlen(char *s)
{
	char *p = s;
	int length;

	while (*p != '\0')
	{
		p++;
	}

	length = p - s;

	return (length);
}
