//Write a C program to find the number of elements that is higher than the average of given array of integers.

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

	int avr=0;
	for (int i = 0; i < size1; i++)
	{
		avr += arr1[i];
	}
	avr = avr/ size1;
	
	int count = 0;
	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] > avr)
			count++;
	}
	printf("number of elements that is higher than the average of array: %d", count);
    return 0;
}