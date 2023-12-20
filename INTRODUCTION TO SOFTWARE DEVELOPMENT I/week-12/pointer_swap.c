#include <stdio.h>

void	swap(int a, int b)
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void	p_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 1;
	int b = 2;
	printf("a = %d\nb = %d\n", a, b);
	swap(a,b);
	printf("after normal swap:\n");
	printf("a = %d\nb = %d\n", a, b);
	printf("---------------\n");
	a = 1, b = 2;
	printf("a = %d\nb = %d\n", a, b);
	printf("after pointer swap:\n");
	p_swap(&a,&b);
	printf("a = %d\nb = %d\n", a, b);

	return 0;
}
