#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Is pointing to a string of 0 and 1 chars;
 * Return: the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1
 * if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		decimal = 2 * decimal + (b[index] - '0');
	}
	return (decimal);
}
