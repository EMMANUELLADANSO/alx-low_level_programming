#include "main.h"
/**
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: always 0
 */ 
void print_alphabet_x10(void)
{
	int i,j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	return (0);
}
