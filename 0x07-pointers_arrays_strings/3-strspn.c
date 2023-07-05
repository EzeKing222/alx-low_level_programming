#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be search
 * @accept: the prefix to be measured
 * Return: the number of bytes in s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				byt++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (byt);
		}
		s++;
	}
	return (byt);
}
