//C program to read and display m*n matrix.
//hello guys i am aakasmik
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,m,n;
	float a[10][10];
	printf("Enter row and column size:\n");
	scanf("%d%d", &m, &n);
	printf("Enter elements matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Matrix read is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
}
