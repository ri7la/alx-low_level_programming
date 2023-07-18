#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: no return
 */

void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
