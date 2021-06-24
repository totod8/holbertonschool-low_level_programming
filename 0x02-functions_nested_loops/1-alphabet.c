#include "holberton.h"
/**
 * main - check the code for the holberton school
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

