#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;
	int z;
	int w;
	int lli;

	x = sizeof(char);
	y = sizeof(int);
	z = sizeof(long int);
	w = sizeof(long long int);
	lli = sizeof(float);

	printf("Size of a char: %d byte(s)\n", x);
	printf("Size of an int: %d byte(s)\n", y);
	printf("Size of a long int: %d byte(s)\n", z);
	printf("Size of a long long int: %d byte(s)\n", w);
	printf("Size of a float: %d byte(s)\n", lli);

	return (0);
}
