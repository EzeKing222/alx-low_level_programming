#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination string pointer
 *
 * @src: source string pointer
 *
 * @n: number of bytes destination used
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];

	for (; count < n; count++)
		dest[count] = '\0';

	return (dest);
}
