// FILE 
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int num, grd;
	char *name;
	FILE *f; 
	f = fopen("grades.txt", "w");
	grd=1;
	while(grd!=-1 || num!=-1)
	{
		printf("Enter a student name");
		scanf("%s", name);
		printf("Enter student number and grade. To stop enter -1: ");
		scanf("%d %d", &num, &grd);
		if(grd!=-1 || num!=-1) fprintf(f, "%10s %6d %3d\n", name, num, grd);
	}
	fclose(f);
	return 0;
}
