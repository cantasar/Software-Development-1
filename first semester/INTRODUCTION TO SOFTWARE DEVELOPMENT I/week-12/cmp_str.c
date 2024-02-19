#include <stdio.h>

int main()
{
	char a[100] = {0};
	printf("enter first string: ");
	scanf("%s", a);
	char b[100] = {0};
	printf("enter second string: ");
	scanf("%s", b);

	int count = 0;
	char *p_len = &a[0];
	char *p1 = &a[0];
	char *p2 = &b[0];

	while (*p_len != '\0')
	{
		p_len++;
		count++;
	}

	if (*p1 == *p2)
	{
		while (*p1 == *p2)
		{
			p1++;
			p2++;
		}
	}
	

	return 0;
}
