#include <stdio.h>
/**
 * main - this is the main function
 *
 * Description: prints chars
 *
 * Return: 0
 */
int main(void)
{
	char e;
	int f;
	long int g;
	long long int h;
	float i;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(e));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(f));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(g));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(h));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(i));
	return (0);
}
