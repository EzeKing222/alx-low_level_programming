#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry poiny
 * Return: always 0
 */
int main(void)
{
	int lowCase;
	int highCase;

	lowCase = 'a';
	highCase = 'A';
	while (lowCase <= 'z')
	{
		putchar(lowCase);
		lowCase++;
	}
	while (highCase <= 'Z')
	{
		putchar(highCase);
		highCase++;
	}
	putchar('\n');
	return (0);
}
