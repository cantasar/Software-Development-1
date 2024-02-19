//2.	Write a C program that will accept an integer and convert it into a binary representation.

#include <stdio.h>

int main()
{
	int num;
	printf("enter number: ");
	scanf("%d", &num);
    int binary[32];
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }
	i--;
    printf("binary representation: ");
    for (; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
	return 0;
}
