#include <stdio.h>
/**
*main - Entry point
*Description: To print digit of base 10
*Return: Always 0 for successs
*/
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		printf("\n");
		a = a + 1;
	}
	return (0);
}
