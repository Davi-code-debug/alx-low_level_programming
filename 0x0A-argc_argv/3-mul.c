#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * prints an integer
 * returns 0 if argc is not 3 otherwise the product
 * Return: 0 after success
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
