#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and determines its properties
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("greater than 5");
	else if (last_digit == 0)
		printf("0");
	else
		printf("less than 6 and not 0");

	printf("\n");

	return (0);
}
