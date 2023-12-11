//8 Write a C program to remove duplicate elements from an array



#include <stdio.h>

int main() {
    int size1, count = 0;

    printf("number of elements in array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < size1; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("array with duplicate elements: \n");
    for (int i = 0; i < size1; i++)
        printf("%d ", arr1[i]);
	printf("\n");

	for (int i = 0; i < size1; i++) {
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
				count++;
            }
        }
    }
	printf("count %d\n", count);

	int arr2[size1-count-1];
	int k= 0;

	for (int i = 0; i < size1; i++) {
        for (int j = 0; j < i; j++) {
            if (arr1[i] == arr1[j]) {
				break;
            }else
			{
				arr2[k] = arr1[i];
				k++;
				break;
			}
        }
    }

    printf("\narray without duplicate elements: \n");
    for (int i = 0; i < size1-count-1; i++)
        printf("%d ", arr2[i]);
	printf("\n");

    return 0;
}
