#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of characters to be printed
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
