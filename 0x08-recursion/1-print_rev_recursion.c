#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 * return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
