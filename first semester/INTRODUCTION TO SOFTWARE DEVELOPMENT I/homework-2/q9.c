// Write a C program to test the equality of two arrays

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
        if (arr1[i] != arr2[i]) {
			printf("The arrays are not equal.\n");
			return 0;
        }
    }
	 printf("The arrays are equal.\n");

    return 0;
}