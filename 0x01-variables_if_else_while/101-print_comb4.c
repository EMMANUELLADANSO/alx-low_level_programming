#include <stdio.h>
/**
 * main - print if the number is positive, zero or negative
 *
 * Desription: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int d, p, m;
for (d = '0'; d < '9'; d++)
{
	for (p = d + 1; p <= '9'; p++)
	{
		for (m = p + 1; m <= '9'; m++)
		{
			if ((p != d) != m)
			{
				putchar(d);
				putchar(p);
				putchar(m);
				if (d == '7' && p == '8')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
}
	putchar('\n');
return (0);
}
