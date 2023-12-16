//16.	Write a C program to count the number of days from the beginning of a year when a data is given fort he same year. Example: If given date is 25.7.2020, next day is 26.7.2020. You can assume that all months are 30 days.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int day, month, year;

    printf("Enter the day month and year: ");
    scanf("%d %d %d", &day, &month, &year);

	printf("number of days from the beginning of %d: %d", year, day + (month-1)*30);

	return 0;
}
