#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always O (Success)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
		putchar('\n');
	}

	return (0);
}
