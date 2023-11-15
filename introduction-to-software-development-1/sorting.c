#include "stdio.h"

int main(int argc, char const *argv[])
{
	int arr[] = {12,34,21,1,90,76,45};

	int i = 0;
	int j = 0;
	int tmp;
	while (j <= 5)
	{
			i = 0;
		while (i <= 5)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
	
	i = 0;
	while (i <= 6)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	return 0;
}
