#include "main.h"
#include <stdio.h>
/**
 * print_square - a function that prints a square
 * @size: variable tested
 * Return: ALways 0 (success)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

