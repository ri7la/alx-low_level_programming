#include <stdio.h>
/**
 * main- Entry point
 * Return: always 0
 */
int main(void)
{
char carac = 'a';
while (carac <= 'z')
{
putchar(carac);
carac++;
}
putchar('\n');
return (0);
}
