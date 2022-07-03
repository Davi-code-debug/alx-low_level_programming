#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - Entry point
 * n: has a random number
 * ld: has the last digit of n
 *
 * prints the last digit of n with conditions
 *
 * Return: 0 after success
 */

int main(void)

{

	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
	printf("Last digit of %d is ld and is greater than 5\n", ld);
	else if (ld == 0)
	printf("Last digit of %d and is 0\n", ld);
	else if (ld < 6 && ld > 0)
	printf("Last digit of %d and is less than 6 and not 0\n", ld);

	return (0);

}