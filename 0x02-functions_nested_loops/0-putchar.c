#include "main.h"

/**
 * printString - writes the character array str to stdout
 * @str: The string to print
 *
 * Return: no return
 */

void printString(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - the entry point of the programme
 *
 * Return: 0 if the programme compilation goes well
 */

int main(void)
{
	char *string = "_putchar";

	printString(string);
	_putchar('\n');

	return (0);
}
