#include "main.h"
/**
 * _islower - return something if is lowercase
 * @c: The character must be checked
 * main - Entry point
 * Description: 'prints _putchar to stdout'
 * Return: 1 for lowercase and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
		_putchar('\n');
	}
}
