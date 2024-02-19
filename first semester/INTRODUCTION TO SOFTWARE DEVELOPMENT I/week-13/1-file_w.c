// FILE 
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int num, grd;
	FILE *f; 
	f = fopen("grades.txt", "w");
	grd=1;
	while(grd!=-1)
	{
		printf("Enter student numbar and grada. To stup enter -1");
		scanf("%d %d", &num, &grd);
		if(grd!=-1) fprintf(f, "%6d %3d\n", num, grd);
	}
	fclose(f);
	return 0;
}
