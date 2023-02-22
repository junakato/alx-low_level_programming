#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet ten times
 *
 *Return: returns alphabet
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (count++ <=  9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
