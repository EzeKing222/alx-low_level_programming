#include "main.h"

/**
 * _strchr - locates a charater in a string
 * @s: the string to be search
 * @c: charater to be located
 * Return: if c is found - a pointer to the first occurance if not found NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
