#include "main.h"
/**
 * main - returns the length of a string
 * returns - string length
 */
int _strlen(char *s)
{
	int i;
	
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
