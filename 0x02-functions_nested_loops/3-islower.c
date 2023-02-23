#include "main.h"

/**
 * _islower - Entry Point
 *
 * Description: Prints a..z x 10
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
