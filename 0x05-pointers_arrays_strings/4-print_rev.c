#include "main.h"
/**
 * print_rev - reverse string
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int o;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (o = length; o > 0; o--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
