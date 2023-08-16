#include "main.h"
/**
 * print_islower(int c) - return something if is lowercase
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: always 0
 */
int _islower(int c)
{
	for (c = 97; c >= 122; c++)
		if (c >= 97 || c <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	_putchar('\n');
}
