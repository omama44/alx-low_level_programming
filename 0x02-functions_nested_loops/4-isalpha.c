#include "main.h"

/**
 * islower  - shows 1 if the input is a
 * letter another case shows
 *
 * @c: the character in ASCLL code
 *
 * Return: 1 for letters. 0 for the rest
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 92))
        {
                return (1);
        }
        else
        {
                return (0);
        }
        _putchar('\n');
}
