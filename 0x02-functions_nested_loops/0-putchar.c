#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */



void printString(char* str){
	int i = 0;
	while(str[i] != '\0'){
		_putchar(str[i]);
		i++;
	}
}

int main(void){
	char* string = "_putchar";

	printString(string);
	_putchar('\n');
	return 0;
}
