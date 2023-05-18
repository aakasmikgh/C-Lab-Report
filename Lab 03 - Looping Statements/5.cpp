//check whether a given number is palindrome or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n, revn=0, r, origin_n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	origin_n = n;
	// Yo chai reverse ko lagi
	while (n != 0)
	{
		r = n % 10;
		revn = revn * 10 + r;
		n /= 10;
	}
	if (origin_n == revn)
	{
		printf("%d is a palindrome number.\n", origin_n);
	}
	else
	{
		printf("%d is not a palindrome number.\n", origin_n);
	}
	getch();
}
