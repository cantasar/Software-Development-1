//Write a C program to remove all occurrences of a specified value in a given array of integers and return the new length of the array.

#include <stdio.h>

int main() {
    int n;
    int remove;

    printf("number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("value you want to remove: ");
    scanf("%d", &remove);

    printf("Your array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

	int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == remove)
        {
			count++;
			for (; i < n; i++) {
				arr[i] = arr[i+1];
			}
        }
    }

	printf("New array: \n");
    for (int i = 0; i < n - count; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
	printf("New Lenght: %d\n", n - count);

    return 0;
}
