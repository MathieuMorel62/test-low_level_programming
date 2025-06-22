#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int rev_alphabet;

	for (rev_alphabet = 122; rev_alphabet >= 97; rev_alphabet--)
		putchar(rev_alphabet);
	putchar('\n');

	return (0);
}
