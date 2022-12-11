#include <stdio.h>
#include <stdlib.h>
/**
 * main -m main block
 * Description: prints all single number of base 10ase 10
 * starting from a new line
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}

	putchar('\n');
	return (0);
}
