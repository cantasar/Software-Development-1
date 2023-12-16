//12.	Write a C program to find the numbers greater than the average of the numbers of a given array.

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

	int sum = 0;
    for (int i = 0; i < size1; i++) {
		sum += arr1[i];
    }
	int avr = sum / size1;
	printf("greater than avr: ");
    for (int i = 0; i < size1; i++) {
		if (arr1[i] > avr)
		{
			printf("%d ", arr1[i]);
		}
    }
    return 0;
}