//read m*n matrix and check whether it is identity matrix or not.
#include<stdio.h>
int main()
{
	int a[20][20],i,j,m,n,c=1;
	printf("Enter matrix: ");
	scanf("%d%d",&m,&n);
	printf("Enter element: ");
	if (m==n)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
				if (i==j)
				{
					if (a[i][i!=1])
					{
						c=0;
					}
				}
				else
				{
					if (a[i][j]!=0)
					{
						c=0;
					}
				}
			}
		}
		if (c==1)
		printf("Identity matrix.");
		else
		printf("Not identity matrix.");
	}
	else
		printf("Not Identity.");
}
