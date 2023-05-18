// Read numbers until user enter zero and calculate the average of even and odd numbers seperately.
#include<stdio.h>
#include<conio.h>
int main()
{
	int es=0, ec=0;
	int os=0, oc=0;
	int n;
	while (1)
	{
		printf("Enter a number (or 0 to exit): ");
		scanf("%d", &n);
		if (n == 0)
		break;
		if (n % 2 == 0)
		{
			es += n;
			ec++;
		}
		else
		{
			os += n;
			oc++;
		}
	}
	if (ec > 0)
	{
		double even_avg = (double) es / ec;
		printf("The average of even numbers is: %lf\n", even_avg);
	}
	else 
	{
		printf("No even numbers were entered.\n");
	}
	if (oc > 0)
	{
		double odd_avg = (double) os / oc;
		printf("The average of odd numbers is: %lf\n", odd_avg);
	}
	else
	{
		printf("No odds were entered.\n");
	}
	getch();
}
