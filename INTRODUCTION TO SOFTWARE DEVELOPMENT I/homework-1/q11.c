//11.	Write a C program to compute the sum of the first 100 prime numbers.

#include <stdio.h>

int main()
{
    int count = 0;
    int num = 2;
    int sum = 0;

    while (count < 100)
    {
        int flag = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            sum += num;
            count++;
        }
        num++;
    }

    printf("sum of the first 100 prime number: %d\n", sum);

    return 0;
}
