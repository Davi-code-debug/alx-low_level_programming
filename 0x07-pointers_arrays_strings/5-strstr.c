#include <stdio.h>
#include "main.h"
/**
 * _strstr - finds a substring in a string
 * @haystack: points to string
 * @needle: points to substring
 *
 *locates a substring
 * Return: haystack at the first occurrence of
 * needle
 * returns null if there is no occurence
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
