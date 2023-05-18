// Read a four digit integer and change its first and last digit
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int n, firstdigit, lastdigit, digits, exchangedigit;
	printf("Enter number: ");
	scanf("%d", &n);
	lastdigit = n%10;
	digits = (int)log10(n);
	firstdigit = (int)(n/pow(10, digits));
	exchangedigit = lastdigit;
	exchangedigit *= (int) round(pow(10, digits));
	exchangedigit += n%((int) round(pow(10, digits)));
	exchangedigit -= lastdigit;
	exchangedigit += firstdigit;
	printf("Number after exchanging first and last digit: %d", exchangedigit);
	getch();
}
