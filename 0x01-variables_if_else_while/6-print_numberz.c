#include <stdio.h>

/**
 * main - entry point
 * return: 0 (success)
 */
int main(void)
{
	/* display single digit of denary(base 10) */
	int denary;
	int starter;
	
	denary = 10;
	for (starter = 0; starter < denary; starter++)
		putchar(starter);
	putchar('\n');
	return (0);
}
