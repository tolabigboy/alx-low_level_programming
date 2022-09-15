#include "main.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints number
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}

