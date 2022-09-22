#include "main.h"

/**
  * print_number - print an integer
  * @n: integers to be printed
  * 
 **/

void print_number(int n)
{
	unsigned int num;


	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((n1 % 10) + '0');
}

