#include "main.h"
/**
* print_alphabet_x10 - check code
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int letter;
	char let;

	for (letter = 0; letter <= 9; letter++)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
		_putchar('\n');
	}
}
