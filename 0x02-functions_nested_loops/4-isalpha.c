#include "main.h"
/**
 * _isalpha - Make lowercase, uppercase
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: always 0
 */
int _isalpha(int c)
{
	if (c >= 33 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
