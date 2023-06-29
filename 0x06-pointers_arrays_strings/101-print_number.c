#include "main.h"

/**
 * print_num - print numbers chars
 * @n: integer values
 * Return: 0
 */

void print_num(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_num(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
