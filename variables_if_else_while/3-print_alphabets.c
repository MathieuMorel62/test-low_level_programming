#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
	char upper;

	for (lower = 97;  lower < 123; lower++)
		putchar(lower);
	for (upper = 65; upper < 91; upper++)
		putchar(upper);
	putchar('\n');

	return (0);
}
