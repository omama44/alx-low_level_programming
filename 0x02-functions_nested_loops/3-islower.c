#include "main.h"

/**
 * islower  - shows 1 if the input is a
 * lowercase character another case shows
 * 0
 *
 * @c: the character in ASCLL code
 *
 * Return: 1 for lowercase charactor. 0 for the rest
 */
int _islowers(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

