#include <stdio.h>
#include "main.h"

/**
 * times_table - display times table
 *
 **/

void times_table(void)
{
	int n;
	int i;
	int result;

	n = 0;

	while (n < 10)
	{
		_putchar(48);
		for (i = 1; i < 10; i++)
		{
			result = n * i;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar(' ');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
		n++;
	}
}


