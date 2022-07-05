#include <stdio.h>
/**
*main - this us my entry
*Description: Alphabet with putchar
*Return: 0
*/

int main(void)
{
	char Al;

	for (Al = 'a' ; Al <= 'z' ; Al++)
	{
	putchar(Al);
	}
	putchar('\n');
	return (0);
}
