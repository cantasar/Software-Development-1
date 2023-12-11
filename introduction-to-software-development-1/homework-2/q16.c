//16.	Write a C program to merge two given sorted array of integers and create a new sorted array.

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

	int newArray[size1 + size1];
	int i=0, j=0, k=0;

    while (i < size1 && j < size1) {
        if (arr1[i] <= arr2[j]) {
            newArray[k++] = arr1[i++];
        } else {
            newArray[k++] = arr2[j++];
        }
    }
	while (i < size1) {
        newArray[k++] = arr1[i++];
    }
    while (j < size1) {
        newArray[k++] = arr2[j++];
    }
    printf("\nsorted array: \n");
    for (int i = 0; i < size1 + size1; i++)
        printf("%d ", newArray[i]);

    return 0;
}