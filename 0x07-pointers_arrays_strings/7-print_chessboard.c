#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints an 8 by 8 matrix
 * @a: points to a
 * i: row
 * j: column
 *
 * prints a 2 dimensional array
 * Return: void after success
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
