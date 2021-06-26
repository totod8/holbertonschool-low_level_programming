#include "holberton.h"

/**
 * print_last_digit - print the digif end
 * @n: parameter of function
 * Return: Aleways 0
 */
int print_last_digit(int n)
{
	int k;

	if (n < 0)
	{
		k = n % 10;
		_putchar(-k + 48);
		return (-k);
	}
	else
	{
		k = n % 10;
		_putchar(k + '0');
		return (k);
	}
}
