#include <stdio.h>
#include <stdlib.h>
/**
 * main - m block
 * Descripion: prints all single digit number of base 10
 * starting from 0, folowed by a new line.
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
