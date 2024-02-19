//7.	Write a C program to convert a binary number to decimal number

#include <stdio.h>

int main()
{
    int number,binary,num2;
    int decimal = 0;
    int base = 1;
    printf("Please enter a binary number: ");
    scanf("%d" , &number);

    binary = number;
    while ( number > 0 ) {
        num2 = number % 10;
        decimal = decimal + num2 * base;
        number = number / 10;
        base = base * 2;
    }
    
	printf("decimal is %d" , decimal);
    return 0; }
