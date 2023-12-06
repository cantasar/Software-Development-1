#include "stdio.h"

int main()
{
	char string1[] = "How are you?";
	char string2[] = "How are you?";

	int i = 0;
	if (sizeof(string1) == sizeof(string2))
	{
		while (string1[i])
		{
			if (string1[i] == string2[i])
			{
				i++;
				if (i == sizeof(string1) - 1)
				{
					printf("same string!");
					return 0;
				}
				
			}
			else
			{
				printf("Not same string!");
				return 0;
			}
			i++;
		}
	}else
		printf("Not same string!");
	
	
	return 0;
}
