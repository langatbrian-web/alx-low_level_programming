#include "main.h"

/**
 * _isdigit - checks for digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 if it is not.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
