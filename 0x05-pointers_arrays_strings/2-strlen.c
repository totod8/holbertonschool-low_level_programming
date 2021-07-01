#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 * @s :parameter
 * Return: Always 0
 */
int _strlen(char *s)
{
	int cont;
	int i;

	cont = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		cont = cont + 1;
	}
	return (cont);
}


