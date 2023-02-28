#include "main.h"

/*
 * main - prints the numbers, from 0 to 9
 *
 * return sucess
 */
void print_most_numbers(void);
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
