#include "main.h"

/**
 *print_last_digit - prints the last digit
 *@n: int to obtain last digit
 *Return: returns last digit
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (n < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
