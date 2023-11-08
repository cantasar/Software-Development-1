#include "stdio.h"

int main(int argc, char const *argv[])
{
	int x[5];
	int i, sum = 0;
	printf("enter the array values\n");
	for (size_t i = 0; i < 5; i++)
		scanf("%d", &x[i]);
	for (size_t i = 0; i < 5; i++)
		sum+= x[i];
	printf("sum: %d\n", sum);
	
	return 0;
}
