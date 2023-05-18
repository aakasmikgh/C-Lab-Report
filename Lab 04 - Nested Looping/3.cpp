//Read n numbers and calculate the sum of all prime numbers entered by user.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,isPrime,s=0,val;;
	//input ko lagi
	printf("Enter number of values: ");
	scanf("%d", &n);
	// prime number ko 
	for (i=1; i<=n; i++)
	{
		// number prime ho ki haina
		printf("enter a number:");
		scanf("%d",&val);
		isPrime = 1;
		for(j=2; j<=val/2; j++)
		{
			if(val%j==0)
			{
				// i prime haina vane
				isPrime = 0;
				break;
			}
		}
		// i prime ho vane sum ma add garni
		if(isPrime==1)
		{
			s += val;
		}
	}
	printf("Sum of all prime numbers is %d", s);
	getch();
}f
