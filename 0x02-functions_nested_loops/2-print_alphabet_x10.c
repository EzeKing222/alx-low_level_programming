#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int count;
	int alpha;

	for (count = 0; count < 10; count++)
	{
		alpha = 97;
		while (alpha <= 122)
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
	return (0);
}
