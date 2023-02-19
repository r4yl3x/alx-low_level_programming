#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit, q, e;

	q = 'q';
	e = 'e';

	for (digit = 'a'; digit <= 'z'; digit++)
	{
		if (digit != q && digit != e)
		{
			putchar(digit);
		}
	}
	putchar('\n');
	return (0);
}
