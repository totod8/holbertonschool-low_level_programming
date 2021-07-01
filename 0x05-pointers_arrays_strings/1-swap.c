#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: parameter
 * @b: parameters
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
