#include "main.h"
/**
 * more_numbers() - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * return - nothing
 */
void more_numbers(void)
{
	int i,j;
	
	for(i = 1; 1 <= 10; i++)
	{
		for(i = 0;j <= 14; j++)
		{
			if(j >= 10)
				_putchar('1');
			_putchar(j%10 + '0');
		}
	}
}
