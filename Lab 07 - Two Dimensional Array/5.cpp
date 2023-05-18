//C program to accept a matrix and determine whether it is sparse matrix or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],m,n,i,j,c=0,t;
	printf("Enter order of matrix: ");
	scanf("%d%d", &m, &n);
	t=m*n
	printf("Enter element of the matrix: ");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			c=c+1;
		}
	}
	if(c>=2*t/3)
	printf("Sparse matrix");
	else
	printf("Not a sparse matrix");
	getch();
}
