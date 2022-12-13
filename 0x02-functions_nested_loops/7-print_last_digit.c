#include "main.h"

/**
 * print_last_digit - Print the last digit
 * @d: The last digit of the number
 * Return: Value of he last digit
 */

int print_last_digit(int d)
{
	int ld = d % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
