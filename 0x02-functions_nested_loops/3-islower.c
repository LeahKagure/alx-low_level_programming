#include "main.h"

/**
 * _islower - Returns 1 if letter is lowercase, 0 if not.
 * @c: char type letter
 * Return: 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
