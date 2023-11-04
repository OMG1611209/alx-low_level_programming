#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: variable contains an integer
 *
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
	{
		r = r * -1;
	}
	_putchar(r + '0');
	return (r);
}
