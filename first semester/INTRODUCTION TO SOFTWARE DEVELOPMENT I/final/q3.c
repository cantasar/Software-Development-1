#include <stdio.h>

int main()
{
	char a[100] = {0};
	printf("enter a sentence: ");
	scanf("%s", a);

	int turkish = 0;
	int i = 0;
	while (a[i] != 0)
	{
		if (a[i] == 'ğ' || a[i] == 'ş')
			turkish++;
		i++;
	}

	if (turkish >= 1)
		printf("Sentence is Turkish");
	else
		printf("Sentence is NOT Turkish");

	return 0;
}
