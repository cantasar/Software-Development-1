//18.	Write a C program to find a number that appears only once in a given array of integers, all numbers occur twice.

#include <stdio.h>

int main() {
    int size1;

    printf("Number of elements in the first array: ");
    scanf("%d", &size1);

    int arr1[size1];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size1; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Your first array: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);
    printf("\n\n");

    printf("Values that appear only once in the array: ");
    for (int i = 0; i < size1; i++) {
        int count = 0;
        for (int j = 0; j < size1; j++) {
            if (arr1[j] == arr1[i]) {
                count++;
            }
        }
        if (count == 1) {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}

