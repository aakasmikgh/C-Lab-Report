// calculate the sum of left diagonal matrix.
#include<stdio.h>
int main()
{
	int a[20][20],i,j,m,n,s=0;
	printf("Enter order: ");
	scanf("%d%d",&m,&n);
	printf("Enter elements: ");
	if (m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				if (i==j)
				{
					s = s + a[i][j];
				}
			}
		}
	}
	else{
		printf("cannot");
	}
	printf("Sum of left diagonal matrix is %d",s);
}
