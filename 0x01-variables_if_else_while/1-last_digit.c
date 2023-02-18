#include <stdlib.h>
#include <time.h>
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
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here */
	last_num = n % 10; /* Calc last number */

	if (last_num > 5)
		printf("Last digit of %i is %d and is greater than 5\n", n, last_num);
	else if (last_num == 0)
		printf("Last digit of %i is %d and is 0\n", n, last_num);
	else
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, last_num);
	return (0);
}
