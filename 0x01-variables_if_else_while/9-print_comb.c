#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int t;

	for (t = '0'; t <= '9'; t++)
	{
		if (t != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
