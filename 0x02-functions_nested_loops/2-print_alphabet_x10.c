#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: alwayse 0
*/

void print_alphabet_x10(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
