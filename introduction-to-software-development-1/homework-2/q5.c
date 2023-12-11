#include <stdio.h>

int main() {
    int n;
    int value, index;

    printf("Number of elements in array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Value you want to insert: ");
    scanf("%d", &value);
    printf("Index of value you want to insert: ");
    scanf("%d", &index);

    if (index < 0 || index > n) {
        printf("Invalid index!!!!");
        return 1;
    }

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;

    printf("Your array: \n");
    for (int i = 0; i < n + 1; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    return 0;
}
