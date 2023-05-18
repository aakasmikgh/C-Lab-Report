// Enter a year and check whether it is leap year or not. (Use nested if)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int y;
	printf("Enter a year: ");
	scanf("%d", &y);
	if (y % 4 == 0){
		if (y % 100 == 0){
			if (y % 400 == 0){
				printf("%d is a leap year", y);
				exit(0);
			}
			else {
				printf("%d is not a leap year", y);
				exit(0);
			}
			}else {
				printf("%d is a leap year", y);
			}
			}else {
				printf("%d is not a leap year", y);
			}
		}

