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
	for (n = 0 ; n < 5; n++)
	{
	printf(" %d", rand());
	}
	return (0);
}
