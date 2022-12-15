#include "main.h"

/**
 * print_diagonal - function that outputs a diagonal line
 * @n: input number of '\' characters required
 * Return: a diagonal line
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y +1; y < z, y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
