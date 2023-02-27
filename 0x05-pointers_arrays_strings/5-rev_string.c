#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: the string that we want to reverce
 *
 * owned by Hamza-cpp (Hamza OKHADIR);
 */

void rev_string(char *s)
{
	int i, j;
	char tmp;

	/* find the length of the  string */
	int len;

	len = _strlen(s);

	/* swap chars from beginning and end until we reach the middle of the string */
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

