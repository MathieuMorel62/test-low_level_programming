#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @number: the integer to compute the absolute value of
 *
 * Return: the absolute value of n
 */
int _abs(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}
