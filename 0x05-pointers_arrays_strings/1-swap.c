/**
 * swap_int - function that swaps the values of two integers.
 * @a: first intigir
 * @b: second intigir
 *
 * owned by Hamza-cpp ( Hamza OKHADIR );
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

