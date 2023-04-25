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
int d, p;

for (d = '0'; d < '9'; d++)
{
	for (p = d + 1; p <= '9'; p++)
	{
		if (p != d)
		{
			putchar(d);
			putchar(p);
			if (d == '8' && p == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
