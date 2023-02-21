
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


/* declae _putchar function to avoid the  [-Werror=implicit-function-declaration]*/

int _putchar(char c);

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
