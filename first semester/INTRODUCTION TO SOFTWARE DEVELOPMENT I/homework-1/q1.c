//Write a C program to prove that Euclid’s algorithm computes the greatest common divisor of two positive given integers.

#include "stdio.h"

int main()
{
	int a, b;
	printf("enter 2 number:\n");
	scanf("%d %d", &a, &b);

	while (b != 0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	printf("greatest common divisor: %d", a);
	return 0;
}
