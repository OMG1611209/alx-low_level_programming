#include "main.h"

/**
 * print_alphabet_x10 - print alphabet lower case 10 times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 10; i > 0; i--)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
