// read input as a day and convert it into equivalent year, month and day
#include <stdio.h>
#include <conio.h>
int main()
{
	
	int num, years, weeks, days;
	
	// days = 5000;
	printf("Enter Number of days:");
    scanf("%d", &num);
	years = num/365;
	printf("Years : %d\n", years);
	weeks = (num%365)/7;
	printf("Weeks : %d\n", weeks);
	days = num- ((years*365) + (weeks*7));
	printf("Days : %d\n", days);
	getch();
}
