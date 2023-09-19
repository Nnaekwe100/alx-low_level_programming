#include "main.h"

/**
 * swap_int - Will swap the value of two integers
 * @a: The integer to swap
 * @b: The integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

