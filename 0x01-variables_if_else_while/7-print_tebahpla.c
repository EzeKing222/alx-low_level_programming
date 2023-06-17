#include <stdio.h>

/**
 * main - entry point
 * Return: aways 0
 */
int main(void)
{
	/* print lower case letter in reverse */
	char revAlphabet;

	revAlphabet = 'z';
	while (revAlphabet >= 'a')
	{
		putchar(revAlphabet);
		revAlphabet -= 1;
	}
	putchar('\n');
	return (0);
}
