#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of both width and length
 * Return: a square
 */

void print_square(int size)
{
	int l, w;

	if (size <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
			
			for (w = 2; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
}
