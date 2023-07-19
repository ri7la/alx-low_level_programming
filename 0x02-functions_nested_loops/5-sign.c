#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, iqual or less than zero
 *
 * @n: the input number
 *
 * Return: 1 is greater...
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_puctahr('\n');

}
