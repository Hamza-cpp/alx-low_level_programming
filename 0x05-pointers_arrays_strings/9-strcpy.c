#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to the buffer pointed by dest
 * @dest: char to check
 * @src: char to check
 * Return: the pointer to dest
 *
 * owned by Hamza-cpp ( Hamza OKHADIR );
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
