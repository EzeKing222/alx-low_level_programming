#include <stdio.h>

/**
 * set_bit - A function that set the value of a bit to one at
 * a given index.
 * @n: The value to set.
 * @index: The given index.
 * Return: the result of the operation (set)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1 << index;
	int set = n | mask;

	return (set);
}
