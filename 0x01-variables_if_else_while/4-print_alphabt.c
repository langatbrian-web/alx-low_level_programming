#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program to print alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch == 'q')
		{
			continue;
		}
		else if (ch == 'e')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
