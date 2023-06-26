#include "main.h"
/**
 * main - returns the length of a string
 * returns - string length
 */
int _strlen(char *s)
{
	int i;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
