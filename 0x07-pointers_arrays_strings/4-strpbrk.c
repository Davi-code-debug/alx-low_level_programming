#include <stdio.h>
#include "main.h"
/**
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
