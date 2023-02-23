#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 *
 * Description: Prints a..z x 10
 *
 * Return: Always 0.
 */


void print_alphabet_x10(void)
{
	int ch = 'a';
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
