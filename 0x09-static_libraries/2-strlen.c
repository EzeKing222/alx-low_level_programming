#include "main.h"

/**
 * _strlen - checks the length of the string
 *
 * @s: string to be checked
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int stringLength = 0;

	while (s[stringLength])
		stringLength++;
	return (stringLength);
}
