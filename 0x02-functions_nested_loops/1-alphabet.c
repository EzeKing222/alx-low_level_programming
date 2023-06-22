#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: always 0 (succes)
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
