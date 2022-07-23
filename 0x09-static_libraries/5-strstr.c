#include <stdio.h>
#include "main.h"
/**
 * _strstr - finds a substring in a string
 * @haystack: points to string
 * @needle: points to substring
 * i: increments haystack
 * j: increments needle
 *
 *locates a substring
 * Return: haystack at the first occurrence of
 * needle
 * returns null if there is no occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
