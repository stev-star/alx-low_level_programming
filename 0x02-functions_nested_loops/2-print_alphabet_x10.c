#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
        char letter;
        int i;

        while(i <= 10)
        {
                letter = 'a';
                while(letter < 'z')
                {
                        _putchar(letter);
                        letter++;
                }
                _putchar('\n');
                i++;
        }
}
