#include "main.h"
/**
 * print_alphabet_x10 - print_alphabet_x10 in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int y;
	char x;

	for (y = 0 ; y < 10 ; y++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}

