#include "main.h"
/**
 * _isalpha.c - Make lowercase, uppercase
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 || c <= 122) || (c >= 65 || c <= 90) || (c >= 33 || c <= 64))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
