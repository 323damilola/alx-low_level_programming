#include "main.h"

/**
 * print_last_digit - Print the last digit
 * @n: The last digit of the number
 * Return: Value of he last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
		return (last_digit);
}
