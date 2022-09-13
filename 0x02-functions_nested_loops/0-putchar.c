#include "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}


