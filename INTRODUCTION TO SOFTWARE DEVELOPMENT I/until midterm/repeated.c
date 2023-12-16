#include "stdio.h"

int main(int argc, char const *argv[])
{

	int arr[] = {25,36,12,12,74,25,71,12};
	int i = 0;
	int j = 0;
	int count = 0;

	while (i < 7)
	{
		j = i;
		count = 0;
		while (j < 7)
		{
			if (arr[i] == arr[j])
			{
				count++;
				if (count == 2)
				{
					printf("%d is repeated\n", arr[j]);
				}
			}
			j++;
		}
		i++;
	}

	return 0;
}
