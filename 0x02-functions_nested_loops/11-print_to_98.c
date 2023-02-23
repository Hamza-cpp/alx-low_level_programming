#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: the number that will start with him.
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
	}

	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("98\n");
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("98\n");
			else
				printf("%d, ", i);
		}
	}
}

