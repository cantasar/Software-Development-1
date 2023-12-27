// FILE 
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int num, grd;
	int avr, count = 0, sum = 0;
	FILE *f; 
	f = fopen("grades.txt", "r");
	while(!feof(f))
	{
		fscanf(f, "%d %d", &num, &grd);
		count++;
		sum += grd;
		printf("%6d %2d\n", num, grd);
	}
	avr = sum/count;
	printf("average: %d\n", avr);
	fclose(f);
	return 0;
}
