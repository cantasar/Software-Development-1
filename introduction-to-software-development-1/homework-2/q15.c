//15.	Write a C program to multiply corresponding elements of two arrays of integer

#include <stdio.h>

int main() {
    int size1;

    printf("number of elements in arrays: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of array 1:\n");
    for (int i = 0; i < size1; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    int arr2[size1];
    printf("Enter the elements of array 2:\n");
    for (int i = 0; i < size1; i++) {
        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    printf("Your first array: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);
    printf("\nYour second array: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr2[i]);
    printf("\n\n");

    for (int i = 0; i < size1; i++) {
		printf("index %d: %d * %d = %d\n", i, arr1[i], arr2[i], arr1[i] * arr2[i]);
    }

    return 0;
}