#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers of zero to 98
 *
 * from n to 98, followed by a new line
 *
 * @n: input number.
 *  Return: no return.
 *
 */
void print_to_98(int n)
{
	int k;

	k = 98;
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d", k);
		printf("\n");
	}
	else if (n < 98)
		{
			for (; n < 98; n++)
			{
				printf("%d, ", n);
			}
			printf("%d\n", n);
		}
	else
	{
		printf("%d\n", n);
	}
}
