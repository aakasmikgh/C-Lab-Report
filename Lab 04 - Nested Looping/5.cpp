/*Determine the sum of given series.
F(x)=x/2!-x^3/4!+x^5/6!-x^7/8!...n terms */

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x,n;
	float sum,ctr,i,m,mm,nn,j,d=1;
	printf("Input the value of x: ");
	scanf("%d", &x);
	printf("Input number of terms: ");
	scanf("%d",&n);
	sum = 0;
	m = 1;
	printf("The values of series:\n");
	for(i=0;i<n;i++)
	{
		ctr=(2*i+1);
		mm = (pow(x,ctr));
		for(j=1;j<=ctr+1;j++)
		{
			d=d*j;
		}
		mm = (pow(-1,i)*mm)/d;
		printf("%f\n", nn);
		sum = sum+nn;
	}
	printf("\nThe sum = %f\n", sum);
	getch();
}
