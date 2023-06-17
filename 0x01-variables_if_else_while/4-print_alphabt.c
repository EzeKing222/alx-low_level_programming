#include <stdio.h>

/**
 * main - Entery point
 * Return: always 0
 */
int main(void)
{
	/* print all aphabets except e & q */
	int alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

