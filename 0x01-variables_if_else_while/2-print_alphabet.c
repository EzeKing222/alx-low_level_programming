#include <stdio.h>
#include <ctype.h>

/**
  * main - Entery point
  * Return: Always 0 (success)
  */

int main(void)
{
	int lowerCase;

	lowerCase = 'a';
	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	putchar('\n');
	return (0);
}

