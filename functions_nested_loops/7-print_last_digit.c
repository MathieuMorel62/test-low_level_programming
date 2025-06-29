#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @number: the number to print the last digit of
 *
 * Return: the last digit of number
 */
int print_last_digit(int number)
{
	number = number % 10;

	if (number < 0)
		number = number * -1;

	_putchar('0' + number);

	return (number);
}
