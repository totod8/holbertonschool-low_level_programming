#include "holberton.h"

/**
 * print_rev - displat the string in reverse
 * @s: parameter
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i;
	int cont;

	cont = 0;
	for (i = 0; s[i] != '\0' ; i++)
	{
		cont = cont + 1;
	}
	for (i = cont; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
