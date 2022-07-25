#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds integers
 * @argc: argument counter
 * @argv: argument vector
 *
 * returns 1 if error
 * Return: 0 after success
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	int sum;

	sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		sum = sum + atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
