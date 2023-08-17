#include "main.h"
/**
 * _isalpha - Make lowercase, uppercase
 * @c: The character is letter, lowercase and uppercase
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 33 && c <= 64) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122) || c == 38 || 59 || 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
