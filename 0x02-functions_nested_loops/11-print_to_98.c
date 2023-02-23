#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the number that will start with it
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
		return;
	}
	else if (n < 98)
	{
		int i;

		for (i = n; n  < 98; i++)
			printf("%d, ", i);
		printf("98\n");
	}
	else
	{
		int i;

		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("98\n");
	}
}

