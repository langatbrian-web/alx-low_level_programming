#include "main.h"

/**
 * print_line - function that draws a straigh line
 *@n: input number of characters to print
 * Return: a straight line
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
