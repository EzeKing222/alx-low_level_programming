#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
