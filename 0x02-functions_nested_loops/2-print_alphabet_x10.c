#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowecase followed by a new line
 *
 * return: no return.
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}

