#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - sirve para encontrar el ultimo digito de un numero aleatorio
 * Return: 0
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, k);
	}

	if ((n % 10) == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, k);
	}

	if ((n % 10) < 6 && ((n % 10) != 0))
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}
	return (0);
}
