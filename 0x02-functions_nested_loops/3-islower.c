#include "main.h"
/**
 * _islower - return 1 if the point is a
 * 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase caractere. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
