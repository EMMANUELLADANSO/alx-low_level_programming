#include "main.h"
/**
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: always 0
 */
int main (void)
{
	print_alphabet();
	int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return(0);
}
