#include "main.h"
/**
 * times_table - print times table
 *
 * Return: nothing
 *
 */
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
				}
			}			
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
