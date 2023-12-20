#include <stdio.h>

int main()
{
	char a[100] = {0};
	printf("enter a string: ");
	scanf("%s", a);

	int count = 0;
	char *p = &a[0];

	while (*p != 0)
	{
		p++;
		count++;
	}
	printf("len of string: %d \n", count);
	

	return 0;
}
