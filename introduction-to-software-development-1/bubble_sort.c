#include "stdio.h"

int main(int argc, char const *argv[])
{
	int arr[] = {12,34,21,1,90,76,45};

	int i = 0;
	int j = 0;
	int tmp;
	while (i <= 5)
	{
		j = 0;
		while (j <= 5)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	
	i = 0;
	while (i <= 6)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	return 0;
}
