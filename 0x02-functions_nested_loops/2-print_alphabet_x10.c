#include "main.h"

/**
 * print_alphabet_x10 - Make the alphabet x10
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
