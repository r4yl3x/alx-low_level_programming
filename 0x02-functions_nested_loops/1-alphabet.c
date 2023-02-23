#include "main.h"

/**
 * print_alphabet - Entry Point
 *
 * Description: Prints a..z
 *
 * Return: Always 0.
 */


void print_alphabet(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
