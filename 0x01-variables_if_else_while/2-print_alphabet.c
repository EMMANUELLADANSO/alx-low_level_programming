#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the alphabt in lowercase
 *
 * Desription: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
