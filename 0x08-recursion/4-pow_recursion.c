#include "main.h"
#include <stdio.h>

/**
 * sqrt_mod - Recursive function to find a square root
 * of a given number
 * @n: Given number
 * @i: Variable counter
 * Return: Square root of a given number
 */
int sqrt_mod(int n, int i)
{
	if (i * i == n)
		return (i);
	i++;
	if (i * i < n)
		return (sqrt_mod(n, ++i));
	if (i * i > n)
		return (-1);
	return (i);
}
