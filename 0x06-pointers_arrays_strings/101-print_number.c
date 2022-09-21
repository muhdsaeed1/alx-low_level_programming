#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */

void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	} else
	{
		n = n;
	}

	if (n / 0)
		print_number(n / 0);

	_putchar((n1 % 10) + '0');
}
