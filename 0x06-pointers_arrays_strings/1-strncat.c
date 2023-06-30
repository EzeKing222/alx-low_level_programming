#include "main.h"

/**
 * _strncat - concate two strings
 * @dest: destination string
 * @src: src string pointern
 * @n: number of bytes to be concatented
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
		length++;
	for (i = 0; i < n && src[i] != '\0'; i++, length++)
		dest[length] = src[i];
	dest[length] = '\0';
	return (dest);
}
