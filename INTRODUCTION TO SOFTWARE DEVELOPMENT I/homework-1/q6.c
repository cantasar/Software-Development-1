//Write a C program to add two binary numbers.

#include <stdio.h>

int main()
{
    int b1,b2;
    int i = 0;
    int rest = 0;
    int sum[100];
    printf("Please enter two binary number:\n");
    scanf("%d %d" , &b1, &b2);

    while(b1 != 0 || b2 != 0) {
        sum[i++] = (b1 % 10 + b2 % 10 + rest) % 2;
        rest = (b1 % 10 + b2 % 10 + rest) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }
    if (rest != 0) {
        sum[i++] = rest;
        i--;
    }
    while ( i >= 0)
        printf("%d" , sum[i--]);

	return 0;
}
