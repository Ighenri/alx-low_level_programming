#include <stdio.h>
/**
*main - The entry point
*Description: Numberz
*Return: return 0
*/

int main(void)

{
	char a = 0;

	while (a < 10)
	{
		putchar("%s", a);
		a = a + 1;
	}
	putchar("\n");
	return (0);
}

