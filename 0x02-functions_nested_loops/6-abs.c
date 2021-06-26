#include "holberton.h"

/**
 * _abs - return a positive number
 * @n : parameter
 * Return: Always 0
 */
int _abs(int n)
{
	int k;

	if (n < 0)
	{
		k = (-1) * n;
		return (k);
	}
	else
	{
		return (n);
	}
}
