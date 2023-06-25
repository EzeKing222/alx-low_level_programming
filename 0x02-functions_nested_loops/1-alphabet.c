#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0 (succes)
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}	
}
