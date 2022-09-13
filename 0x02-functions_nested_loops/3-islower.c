#include "main.h"
/**
* _islower - A function for checking uppercase and lowercase
* @c: single letter input
*
* Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

