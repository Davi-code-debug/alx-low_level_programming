#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplictaes string
 * @str: address to string
 *
 * Return: pointer to string duplicate
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	j = 0;

	while (str[j] != '\0')
		j++;

	ch = malloc(sizeof(str) * (j + 1));

	if (ch == NULL)
		return (ch);

	for ( i = 0; str[i] != '\0'; i++)
	{
		*(ch + i) = *(str + i);
	}
	ch[i] = '\0';
	return (ch);
}
