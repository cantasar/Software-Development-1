#include "stdio.h"

int main()
{
	char string1[256];

	printf("string1: ");
	fgets(string1, 256, stdin);

	int i = 0;
	int alph = 0;
	int digits = 0;

	while (string1[i] != '\0')
	{
		if (string1[i] <= '9' && string1[i] >= '0')
		{
			digits++;
		}
		if ((string1[i] >= 'a' && string1[i] <= 'z') || (string1[i] >= 'A' && string1[i] <= 'Z'))
		{
			alph++;
		}
		i++;
	}
	printf("alphabet: %d \n digits: %d", alph, digits);
	
	
	return 0;
}
