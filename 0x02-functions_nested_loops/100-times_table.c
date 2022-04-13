#include "main.h"
/**
 * times_table - prints tables
 * @n: The value of times to be printed
 * Return: Always 0.
 */
void times_table(int n)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar ('0');
				}
				if (b != 0)
				{
					_putchar (' ');
					_putchar ((c % 10) + '0');
				}
				if (b < n)
				{
					_putchar(',');
					_putchar (' ');
				}
			}
			else
			{
				_putchar ((c / 10) + '0');
				_putchar ((c % 10) + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
