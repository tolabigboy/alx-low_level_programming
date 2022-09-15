#include "main.h"
#include <stdio.h>
/**
 * print_line - a function that draws line
 * @n: variable tested
 * Return: Always 0 (success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
