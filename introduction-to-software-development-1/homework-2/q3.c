#include <stdio.h>

int main() {
    int n;
    int find;

    printf("number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("value you want to find the index: ");
    scanf("%d", &find);

    printf("Your array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    for (int i = 0; i < n; i++) {
        if (arr[i] == find)
        {
            printf("%d in %d. index in array \n", find, i);
            return 0;
        }
    }
    printf("%d not foundeed in array \n", find);
    return 0;
}
