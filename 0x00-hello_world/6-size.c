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

	printf("Size of a char:%d\n", x);
	printf("Size of an int:%d\n", y);
	printf("Size of a long int:%d\n", z);
	printf("size of a long long int:%d\n", w);
	printf("size of a float:%d\n", lli);

	return (0);
}



