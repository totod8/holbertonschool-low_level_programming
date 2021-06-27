#include "holberton.h"

/*
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int t;
	int k;
	int i;
	int q;
	int p;
	int u;
	int v;
	int s;
	int n[19];
	int a[19];
	int w[19];
	int y[19];
	int l[19];
	int m[19];
	int z[19];
	int j[19];

	for (q = 0; q <= 1; q++)
	{
		l[q] = q;
		for (t = 0; t <= 9; t++)
		{
			m[t] = t;
			for (k = 0; k < 6; k++)
			{
				z[k] = k;
				for (i = 0; i < 10; i++)
				{
					j[i] = i;
					_putchar(l[q] + '0');
					_putchar(m[t] + '0');
					_putchar(':');
					_putchar(z[k] + '0');
					_putchar(j[i] + '0');
					_putchar('\n');
				}
			}
		}
	}
	for (p = 2; p <= 2; p++)
	{
		n[p] = p;
		for (u = 0; u <= 3; u++)
		{
			a[u] = u;
			for (v = 0; v < 6; v++)
			{
				w[v] = v;
				for (s = 0; s <= 9; s++)
				{
					y[s] = s;
					_putchar(n[p] + '0');
					_putchar(a[u] + '0');
					_putchar(':');
					_putchar(w[v] + '0');
					_putchar(y[s] + '0');
					_putchar('\n');
				}
			}
		}
	}
}

























