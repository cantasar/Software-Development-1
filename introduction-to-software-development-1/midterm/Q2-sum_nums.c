#include <stdio.h>

int main()
{
	int num;
	int sum1;
	int sum2;

	for (int i = 0; i < 100; i++)
	{
		scanf("%d", &num);
		if (num < 30)
			sum1 = sum1 + i;
		if (num >= 30 && num < 60)
			sum2 = sum2 + i;
	}
	printf("total value 0-29: %d", sum1);
	printf("total value 30-60: %d", sum2);
	
	return 0;
}
