#include "holberton.h"

/**
 * print_numbers - function that print
 * @c
 * Return: no return
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
