#include "main.h"
/**
 * main - swaps the values of two integers
 * a - first integer
 * b - second integer
 */
void swap_int(int *a, int *b)
{
	int n;
	
	n = *a;
	*a = *b;
	*b = n;
}
