//14.	Write a C program to reverse an integer number.  Example: If given int is 257 display 752

#include <stdio.h>

int main()
{
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    printf("reversed number: ");
    while(num > 0){
       	printf("%d", num % 10);
        num = num / 10;
    }
}

