//9.	Write a C program that accepts an integer (n) and computes the value of n+nn+nnn

#include <stdio.h>

int main()
{
	int n;
	printf("enter a digit: ");
	scanf("%d", &n);

	printf("%d + %d%d + %d%d%d = %d", n, n, n, n, n, n, n + n*10+n + n*100+n*10+n);
	return 0;
}
