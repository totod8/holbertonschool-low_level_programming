#include "holberton.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - positive or negtive
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	
}
