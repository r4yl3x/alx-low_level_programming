#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	char start = 'a';
	char stop = 'z'

	while (start <= stop)
	{
		putchar(start);
		++start;
	}
	putchar('\n');
	return (0);
}
