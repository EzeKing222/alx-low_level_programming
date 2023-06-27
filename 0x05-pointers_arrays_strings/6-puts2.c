#include "main.h"
#include <stddef.h>
/**
 * puts2 - prints every other charater of string
 *
 * @str: the string to br used
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		if (z % 2 == 0)
			_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
