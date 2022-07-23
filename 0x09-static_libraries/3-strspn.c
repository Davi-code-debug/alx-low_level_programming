#include <stdio.h>
#include "main.h"
/**
 * _strspn - prints the length of a prefix substring
 * @s: points to the string
 * @accept: points to the substring
 * i: bytes for accept
 * d: number of bytes from the substring
 * in the string
 * flag: act as conditions to print result
 *
 * Return: number of bytes in string
 * which make up the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d;
	int i, flag;

	d = 0;

	while (*s != 0)
	{
		flag = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				d++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (d);
		s++;
	}
	return (0);
}
