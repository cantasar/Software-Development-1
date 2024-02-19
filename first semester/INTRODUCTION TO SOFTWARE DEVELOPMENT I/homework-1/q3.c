//Write a C program to divide the two given integers using subtraction operator

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("enter two num:\n");
    scanf("%d %d", &a, &b);

	int count = 0;

	printf("%d / %d ", a, b);
	while (a >= b)
	{
		a = a-b;
		count++;
	}
	printf("= %d ", count);

	return 0;
}
