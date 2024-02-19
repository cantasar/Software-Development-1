//8.	Write a C program that, vhen you read an integer wih 5 digit, displat the middle digit. Example: If readed int is 74563 display 5.

#include <stdio.h>

int main()
{
	int num;
	printf("enter 5 digits number: ");
	scanf("%d", &num);

	printf("middle number: %d", (num/100)%10);
	return 0;
}
