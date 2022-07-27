#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates to strings
 * @s1: points to string
 * @s2: points to string
 *
 * Return: pointer to new allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int i, j, k, a, b;

	j = 0;
	k = 0;

	while (s1[j] != '\0')
		j++;
	while (s2[k] != '\0')
		k++;
	i = j + k;

	ch = malloc(sizeof(char) * (i + 1));

	for (a = 0; s1[a] != '\0'; a++)
	{
		*(ch + a) = *(s1 + a);
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
		ch[a + b] = s2[b];
	}
	ch[i] = '\0';
	return (ch);
}
