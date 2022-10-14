#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int number;
	long int longint;
	long long int llint;
	float fnumber;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(number));
	printf("Size of a long int: %d byte(s)\n", sizeof(longint));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llint));
	printf("Size of a float: %d byte(s)", sizeof(fnumber));
	return (0);
}
