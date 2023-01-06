#include "main.h"
/**
 * _strlen - return the length of a string
 * Omo E no easy ooooo
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int d = 0;

	for (; *s++;)
		d++;
	return (d);
}
