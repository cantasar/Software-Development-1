//15.	Write a C program to count the number of prime numbers less than a given positive number.

#include <stdio.h>

int main()
{
    int count = 0;
    int num = 2;
    int n;
	printf("enter a number: ");
	scanf("%d", &n);

    while (count <= n)
    {
        int flag = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            count++;
        }
        num++;
    }

    printf("number of prime numbers less than %d: %d\n", n, count);

    return 0;
}
