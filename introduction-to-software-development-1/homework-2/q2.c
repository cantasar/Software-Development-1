#include <stdio.h>

int main() {
    int n;
    int find;

    printf("number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        printf("index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("value to check: ");
    scanf("%d", &find);

    printf("Your array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    for (int i = 0; i < n; i++) {
        if (arr[i] == find)
        {
            printf("%d foundeed in array \n", find);
            return 0;
        }
    }
    
    printf("%d not foundeed in array \n", find);

    return 0;
}
