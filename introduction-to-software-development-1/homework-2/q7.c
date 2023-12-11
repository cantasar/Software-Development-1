//7. Write a C program to find the common elements between two arrays of integers.


#include <stdio.h>

int main() {
    int size1, size2;

    printf("number of elements in first array 1: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < size1; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
    printf("number of elements in second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter the elements of array 2:\n");
    for (int i = 0; i < size2; i++) {
        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    printf("Your first array: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);
    printf("\nYour second array: \n");
    for (int i = 0; i < size2; i++)
        printf("%d ", arr2[i]);
    printf("\n\n");

	printf("same values in both array: ");
	for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}
