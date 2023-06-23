#include "main.h"

/**
 * largest number() - prints the largest of three integers.
 * a - first integer
 * b - second integer
 * c - third integer
 * return - largest
 */

int largest_number(int a, int b , int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}else if (a > b && c > a)
	{
		largest = c;
	}else if (b > c)
	{
		largest = c;
	}else
	{
		largest = c;
	}
return (largest);
}
