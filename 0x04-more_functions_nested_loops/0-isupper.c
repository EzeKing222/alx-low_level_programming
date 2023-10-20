#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase charater.
 * @c: charater to check.
 * Return: 1 if c is upper, or 0 otherwise.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
	{
		return (0);
	}
}
