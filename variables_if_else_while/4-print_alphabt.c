#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 97; alphabet < 123; alphabet++)
	{
		if (alphabet != 113 && alphabet != 101)
			putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
