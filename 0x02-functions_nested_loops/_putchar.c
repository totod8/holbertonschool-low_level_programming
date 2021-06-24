#include <unistd.h>
/*
 *entery a poitn
 *
 *Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
