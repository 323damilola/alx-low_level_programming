#include <stdio.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: Thsi is programme that prints out all posible
 * different combination of two digits
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int FD;
	int LD;

	int c2;
	int FD2;
	int LD2;

	while (c <= 98)
	{
		FD = (c2 / 10 + '0');
		LD = (c2 % 10 + '0');
		c2 = 0;
		while (c2 <= 99)
		{
			FD2 = (c2 / 10 + '0');
			LD2 = (c2 % 10 + '0');

				if (c < c2)
				{
					putchar(FD);
					putchar(LD);
					putchar(' ');
					putchar(FD2);
					putchar(LD2);

					if (c != 98)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c2++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
