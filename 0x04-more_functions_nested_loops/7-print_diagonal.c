#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: variable tested
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
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
			_putchar('\');
		}
		_putchar('\n');
	}
}

