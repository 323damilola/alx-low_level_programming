#include "main.h"
/**
 * rev_string - a code that will reverse a string
 * _putchar - print each character
 * @s: a character to check
 * Omo E no easy ooooo
 * Description: This is a code that will reverse a string
 * Return: 0 is success
 */
void rev_string(char *s)
{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
