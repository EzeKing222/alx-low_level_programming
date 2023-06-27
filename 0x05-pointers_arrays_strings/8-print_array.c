#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 *
 * @a: pointer to the input array
 *
 * @n: length of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
