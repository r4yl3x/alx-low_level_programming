#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 :)
 */

int main(void)
{
	int num = '0';

/*	while (num <= '9') */
	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	if (num != '9')
	{
		putchar(',');
		putchar(' ');
	}
/*		++num; */
	}

	putchar('\n');
	return (0);
}
