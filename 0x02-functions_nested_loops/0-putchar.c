#include "main.h"

/**
 * main - print "-putchar" followed by a new line.
 * Return: 0
 */

int main(void)
{
	char firstArray1[] = "_putchar";
	int i = 0;

	while (firstArray1[i] != '\0')
	{
		_putchar(firstArray1[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
