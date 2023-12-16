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

    for (int i = 0; i < n; i++) {
        if (arr[i] == remove)
        {
			for (; i < n; i++) {
				arr[i] = arr[i+1];
			}
        }
    }

	printf("New array: \n");
    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    return 0;
}
