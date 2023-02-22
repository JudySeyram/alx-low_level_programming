#include "main.h"

/**
 * print_alphabet - This program print alphabets in lower case
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i  <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
