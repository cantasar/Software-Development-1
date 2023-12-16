//13. Write a C program top print the average of prime numbers between given two integers.

#include <stdio.h>

int main() {
    int num1,num2;
    int sum = 0, count = 0, average;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    for(int i=num1; i<num2; i++){
        for(int j=2; j<=i; j++){
            if(j==i){
                sum+=i;
                count++;
            }else if(i%j==0){
                break;
            }
        }
    }
    average=sum/count;
    printf("Average = %d", average);

    return 0;
} 

