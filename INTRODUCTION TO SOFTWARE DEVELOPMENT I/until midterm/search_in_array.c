#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x[5];
    int i, num;
    printf("enter the array values\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &x[i]);

    printf("number for search: ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++)
    {
        if (x[i] == num)
        {
            printf("%d found in array", num);
            return 0;
        }
    }
    printf("%d is not found in array", num);

    return 0;
}
