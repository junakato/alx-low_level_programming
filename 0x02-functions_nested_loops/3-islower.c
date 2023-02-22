#include <stdio.h>
#include "main.h"

/**
 *_islower - checks whether character is lower case
 *@c: character to check
 *Return: returns one if true
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
