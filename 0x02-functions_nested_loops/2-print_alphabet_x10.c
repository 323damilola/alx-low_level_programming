#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int ten;
	char d;

	for (ten = 0; ten <= 9; ten++)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);
		_putchar('\n');
	}
}
