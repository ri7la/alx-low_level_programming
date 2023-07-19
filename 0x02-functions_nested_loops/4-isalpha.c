#include "main.h"
/**
 * _isalpha - return 1 if the point is a
 * lettre Another cases, shows 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for lowercase caractere. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
