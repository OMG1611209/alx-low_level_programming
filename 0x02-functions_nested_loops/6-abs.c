#include "main.h"

/**
 * _abs - computes an absolute value of an integer.
 *@n: check the sign of number and change it into positive.
 *
 * Return: absolute value of the number.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
