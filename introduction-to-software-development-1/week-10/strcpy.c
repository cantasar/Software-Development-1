#include "stdio.h"

int main()
{
	char string1[256];
	char string2[256];

	printf("string1: ");
	fgets(string1, 256, stdin);

	int begin;
	int end;
	int i;

	printf("begining index of string: ");
	scanf("%d", &begin);
	printf("end index of string: ");
	scanf("%d", &end);

	printf("\n");

	while (end - begin >= 0)
	{
		string2[i] = string1[begin];
		begin++;
		i++;
	}
	printf("first array: %s", string1);
	printf("new array: %s", string2);
	
	return 0;
}
