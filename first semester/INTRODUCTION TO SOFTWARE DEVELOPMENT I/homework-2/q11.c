//Write a C program to find the k largest elements in a given array. Elements in the array can be in any order.

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

    printf("Your array: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);
    printf("\n\n");

	int largest = arr1[0];
    for (int i = 0; i < size1; i++) {
        if (arr1[i] > largest) {
			largest = arr1[i];
        }
    }

	printf("largest elements in a given array %d", largest);

    return 0;
}