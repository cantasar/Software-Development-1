#include "stdio.h"

int main(int argc, char const *argv[])
{
	int arr[] = {25,36,12,12,74,25,71,12,71,71,71,71};
	int lenght_arr = sizeof(arr)/4;
	int i = 0;
	int j = 0;
	int count = 0;

	while (i < lenght_arr)
    {
        j = 0;
        count = 0;
        while (j < lenght_arr)
        {
            if (arr[i] == arr[j])
                count++;
            j++;
        }
        printf("%d was repeated %d times\n", arr[i], count);
        i++;
    }

    return 0;
}

