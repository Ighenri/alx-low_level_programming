#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is main
 *
 * Description: print random variables
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (;n> 0;)
	{
	printf("%d is positive\n", n);
	}
	for (;n == 0;)
	{
	printf("%d is zero\n", n);
	}
	for (;n < 0;)
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
