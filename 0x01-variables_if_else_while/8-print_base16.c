#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase.
 *
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/* print all numbers of base 16 & lowercase */
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
