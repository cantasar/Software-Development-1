//4.	Write a C program to multiply two given integers without using the multiply operator(*).

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("enter two num:\n");
    scanf("%d %d", &a, &b);

	int count = 0;
	int result = 0;

	printf("%d * %d ", a, b);
	while (count < b)
	{
		result += a;
		count++;
	}
	printf("= %d ", result);

	return 0;
}
