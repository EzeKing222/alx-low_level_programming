#include "main.h"

/**
 * _strcat - concate two strings
 *
 * @dest: pointer 
 *
 * @src: pointer to a charater
 */
char *_strcat(char *dest, char *src)
{
	int length z;

	length = 0;
	while (dest[length] != '\0')
		length++;
	for (z = 0; src[z] != '\0'; z++; length++)
		dest[length] = src[j];
	dest[length] = '\0';
	return (dest);
}
