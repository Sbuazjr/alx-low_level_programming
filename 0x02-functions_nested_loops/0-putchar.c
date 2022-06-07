#include "main.h"

/**
 * main - Print "main" followed by a new line.
 * Return: 0
 */

int main(void)
{
	char name[] = "main";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(name[i]);
	}

	_putchar('\n');

	return (0);
}
