#include "main.h"

/**
 * _isupper - uppercase letters
 * @d: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int d)

{
	if (d >= 'A' && d <= 'Z')
		return (1);
	else
		return (0);

}
