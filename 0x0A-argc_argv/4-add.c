#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * check - check string for digit
 * @str: array str
 * Return: 0 (success)
 */
int check(char *str)
{
	unsigned int count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: count arg
 * @argv: strings of arg
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int count, strr, sum;

	sum = 0;
	count = 1;

	while (count < argc)
	{
		if (check(argv[count]))
		{
			strr = atoi(argv[count]);
			sum += strr;
		}
		else
		{
			printf("Error\n");

			return (1);
		}
		count++;
	}
	printf("%d\n", sum);

	return (0);
}
