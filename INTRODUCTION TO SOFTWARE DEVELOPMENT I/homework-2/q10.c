// 10 Write a C program to separate even and odd numbers of an given array of integers. Put all even numbers first, and then odd numbers

#include <stdio.h>

int main() {
    int size1;

    printf("number of elements in arrays: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < size1; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Your first array: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);
    printf("\n\n");

    printf("even: ");
    for (int i = 0; i < size1; i++) {
        if (arr1[i] % 2 == 0) {
			printf("%d ", arr1[i]);
        }
    }
    printf("\n");
    printf("odd: ");
    for (int i = 0; i < size1; i++) {
        if (arr1[i] % 2 == 1) {
			printf("%d ", arr1[i]);
        }
    }
    printf("\n");


    return 0;
}