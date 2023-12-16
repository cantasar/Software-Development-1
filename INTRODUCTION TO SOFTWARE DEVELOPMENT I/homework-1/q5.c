//5.	Write a C program to accept a positive number and repeatedly add all its digits until the result has only one digit.

#include <stdio.h>

int main()
{
	int num;
    printf("enter num:\n");
    scanf("%d", &num);
    while (num > 9) {
        int sum = 0;

        // Add each digit of the current number
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum; // Update the number with the sum of its digits
    }
	printf("sum of all digits: %d", num);
	return 0;
}
