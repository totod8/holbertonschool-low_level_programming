#include "holberton.h"

/**
 * _puts - display stream
 * @str: parameter
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;
	int cont = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		cont = cont + 1;
	}
	cont = cont - 1;

	for (i = 0; i <= cont; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
