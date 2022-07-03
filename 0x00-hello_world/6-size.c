#include <stdio.h>
/**
 * main - my main entry
 *
 * Description: This is to print different size
 *
 * Return: return 0
 */
int main(void)
{
	char c;
	int d;
	long int e;
	long long int l;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(e));
	printf("Size of a long long int: %lu byte(s)\n" sizeof(l));
	printf("Size of a float: %lu byte(s)\n" sizeof(f));
	return (0);
}
