#include <stdio.h>
/*
 * main - program that prints the alphabet in lowercase, followed by a new line
 *  Return: Always 0 (Success)
 */
int main()
{
	char alp;
		for (alp = 'a'; alp <= 'z'; alp++)
			putchar(alp);
	putchar('\n');
	return 0;
}
