#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to a two dimensional array
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **num;

	if (height <= 0 || width <= 0)
		return (NULL);

	num = malloc(sizeof(int) * height);

	if (num == NULL)
		return (NULL);	

	for ( i = 0; i < height; i++)
	{
		num = malloc(sizeof(int) * width);

		if (num[i] == NULL)
		{
			free(num);
			for (j = 0; j <= i; j++)
				free (num[j]);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for ( k = 0; k < width; k++)
		{
			num[j][k] = 0;
		}
	}
	return (num);
}
