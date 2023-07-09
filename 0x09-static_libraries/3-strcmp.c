#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: value less than 0 if string is less than the other,
 * greater than 0 ..
 */
int _strcmp(char *s1, char *s2)
{
	int counter, compare;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;
	compare = s1[counter] - s2[counter];

	return (compare);
}
