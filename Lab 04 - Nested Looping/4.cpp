//Read a long integer. Calculate the sum of digits until the final sum is single digit.
#include<stdio.h>
#include<conio.h>
int main()
{
	long int n;
	int s = 0, r;
	printf("Enter a number: ");
	scanf("%ld", &n);
	while(n / 10 != 0)
	{
	s = 0;
	while (n != 0)
	{
		r = n % 10; //last digit ko lagi
		s += r; //sum ma reminder add garni
		n = n/10; //
	}
	n = s;
}
	printf("%ld", s);
	getch();
}
