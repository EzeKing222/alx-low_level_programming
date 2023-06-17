#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	/* print all digits of base 10 */
	int denary;
	int start;

	denary = 10;
	start = 0;
	while (start < denary)
	{
		printf("%d\n", start);
		start++;
	}
	return (0);
}
