#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: alwayse 0
*/

void print_alphabet_x10(void)
{
	int n;
	int i;

	while (i <= 10)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
		i++;
	}
}
