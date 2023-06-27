#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: takes an input as an integer
 *
 * @b: takes an input as integer
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
