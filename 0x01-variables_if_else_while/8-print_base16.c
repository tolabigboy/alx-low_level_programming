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
	int num;
	char alph;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);

	putchar('\n');

	return (0);
}
