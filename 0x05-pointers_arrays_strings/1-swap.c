#include <stdio.h>

/**
 * swap_int - swaps two integers
 *
 * @a: first intiger
 * @b: second intiger
 */

void swap_int(int *a, int *b)
{
	int a1 = *a;
	*a = *b;
	*b = a1;
}
