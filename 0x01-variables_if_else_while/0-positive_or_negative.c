#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * a program  program will assign a random number to the variable n each time it is executed whether n is positive or nagative
 * return : always 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%d is positive \n", n);
	else if (n < 0)
                printf("%d is negative\n", n);
	else if (n == 0)
                printf("%d is zero\n":, n);
		return (0);
}
