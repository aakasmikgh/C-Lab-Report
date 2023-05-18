// read a number n and check whether it is perfect or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,s=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
	}
	if(s==n)
	printf("It is a perfect number");
	else 
	printf("It is not a perfect number");
	getch();
}
