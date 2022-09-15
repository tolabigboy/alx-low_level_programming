#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - a function that prints
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if ((i == '2') || (i == '4'))
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
