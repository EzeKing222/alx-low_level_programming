#include <stdio.h>
#include "main.h"

/**
 * set_bit - A function that set the value of a bit to one at
 * a given index.
 * @n: The value to set.
 * @index:  the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
