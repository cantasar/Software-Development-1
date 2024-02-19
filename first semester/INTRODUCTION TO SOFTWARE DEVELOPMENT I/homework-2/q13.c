//13.	Write a C program to find the length of the longest consecutive sequence of a given array of integers.

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
	printf("longest consecutive sequence: %d\n", arr1[size1 - 1]);
	int len = 0;
	while (arr1[size1 - 1] / 10 > 0)
	{
		len++;
		arr1[size1 - 1] = arr1[size1 - 1] / 10;
	}
	printf("LENGHT of longest consecutive sequence: %d\n", len + 1);
	
    return 0;
}