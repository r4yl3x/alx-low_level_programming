#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	char digit;

	for (digit = 'z'; digit >= 'a'; --digit)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
