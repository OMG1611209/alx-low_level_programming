#include "main.h"

/**
 * _isalpha - checks if character is lower or upper case
 *
 * @c: check the chracter
 *
 * Return: 1 if c is lower or upper case, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
