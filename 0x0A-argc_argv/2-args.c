#include <stdio.h>

/**
 * main - prints string
 * @argc: argument counter
 * @argv: argument vector
 *
 * prints strings
 * Return: 0 after success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
