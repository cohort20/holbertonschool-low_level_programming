#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = 0;

	while (i <= '9')
	{
		j = i + 1;

		while (j <= '9')
		{
			if (i < j)
			{
				if (k > 0)
				{
					putchar(',');
					putchar(' ');
				}
			putchar(i);
			putchar(j);
			}
			j = j + 1;
			k = 1;
		}
	i = i + 1;
	}
	putchar('\n');
	return (0);
}

