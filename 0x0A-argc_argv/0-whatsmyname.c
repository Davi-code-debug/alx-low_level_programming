#include <stdio.h>
/**
 * main - it prints an argument vector
 * @argc: argument counter
 * @argv: argument vector
 *
 * prints a string
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
