#include <stdio.h>

/**
 * main - prints the number of strings in a command line
 * @argc: argument counter
 * @argv: argument vector
 *
 * prints number of strings
 * Return: 0 after success
 */
int main(__attribute__((unused)) int argc,
		__attribute__((unused)) char *argv[])
{
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
