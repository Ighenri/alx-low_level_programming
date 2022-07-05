#include <stdio.h>
/**
*main - The entry main
*Declaration: Reverse alphabet
*Return: return 0
*/

int main(void)

{
	char AL;

	for (AL = 'z'; AL >= 'a'; --AL)
	{
	putchar(AL);
	}
	putchar('\n');
	return (0);
}
