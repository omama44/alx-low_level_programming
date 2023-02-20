#include <stdio.h>
/**
 *main - Entery point
 *description: 'print alpabets lower case'
 *Return: always 0
 */
int main(void)
{
	char n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar ("%c\n");
	return (0);
}
