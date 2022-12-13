#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 *
 * @c: the character to print
 *
 * Return: on Success 1
 * On fail -1 and error is set appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
