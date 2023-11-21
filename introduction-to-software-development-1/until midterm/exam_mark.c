#include "stdio.h"

int main(int argc, char const *argv[])
{
	int x,y,total;
	printf("midterm and final:\n");
	scanf("%d %d", &x, &y);
	total = x*0.4+y*0.6;
	if (total >= 60)
	{
		if (total>=90) printf("AA");
		else if (total>=80) printf("BB");
		else if (total>=70) printf("CC");
		else printf("DD");
	}else printf("FF");
	return 0;
}