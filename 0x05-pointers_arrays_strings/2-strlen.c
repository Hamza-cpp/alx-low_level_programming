/**
 * _strlen - function that returns the length of a string.
 * @s: the string we want to calcul his length
 *
 * Return: the length of the string s
 *
 * owned by Hamza-cpp ( Hamza OKHADIR );
 */

int _strlen(char *s)
{
	int ctr;

	ctr = 0;
	while ( s[ctr] != '\0')
		ctr++;
	return (ctr);
}

