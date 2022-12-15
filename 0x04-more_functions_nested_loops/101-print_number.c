#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 * Abeg Make una no stress me lyk dis oooo
 *
 * I just waant to flex and chill
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
