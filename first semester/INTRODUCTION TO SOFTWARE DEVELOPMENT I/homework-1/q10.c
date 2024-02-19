//10.	Write a C program to print numbers between 1 to 100 which are divisible by 3, 5 and by both.

#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i%3 == 0 && i%5 == 0)
			printf("%d divisible by both\n", i);
		else if (i%3 == 0)
			printf("%d divisible by three\n", i);
		else if (i%5 == 0)
			printf("%d divisible by five\n", i);
		else
			printf("%d\n", i);
		i++;
	}

	return 0;
}
