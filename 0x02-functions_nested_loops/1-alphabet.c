#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Make the alphabet
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: void
 */

void print_alphabet(void)

{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
