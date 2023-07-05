#include "main.h"

/**
 * _strpbrk - search @s for any set of bytes
 * @s: string
 * @accept: the set of bytes to be search for
 * Return: if a set is matched, NULL if no set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
