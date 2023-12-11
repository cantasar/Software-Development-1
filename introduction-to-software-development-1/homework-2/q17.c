//17.	Write a C program to calculate the median of an given unsorted array of integers

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
    printf("\n");

    printf("Your array: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);
    printf("\n\n");

    for (int i = 0; i < size1-1; i++) {
        for (int j = 0; j < size1-i-1; j++) {
            if (arr1[j] > arr1[j+1]) {
				int temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = temp;
            }
        }
    }
    if (size1 % 2 == 0) {
        int mid1 = arr1[size1 / 2 - 1];
        int mid2 = arr1[size1 / 2];
        printf("median of array: %d\n", (mid1 + mid2) / 2);
    } else
        printf("median of array: %d\n", arr1[size1 / 2]);
    return 0;
}