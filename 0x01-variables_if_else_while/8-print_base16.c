#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char num = '0';
	char digit;

	while (num >= '0' && num <= '9')
	{
		putchar(num);
		++num;
	}
	for (digit = 'a'; digit <= 'f'; ++digit)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
