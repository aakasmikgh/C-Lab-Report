// Enter an unsigned integer and check whether its last digit is greater than 5 or not.
#include <stdio.h>
#include <conio.h>
int main()
{
	int i, lastDigit;
	printf("Enter an unsigned integer: ");
	scanf("%d",&i);
	// Last Digit find garne
	lastDigit = (int)i % 10;
	// to check whether it is greter than 5 or not
	if (lastDigit < 5)
	{
		printf("Last Digit is less than 5\n");
	}
	else if (lastDigit == 5)
	{
		printf("Last Digit is 5\n");
	}
	else
	{
		printf("Last Digit is greater than 5\n");
	}
	getch();
}
