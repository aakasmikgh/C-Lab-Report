//two elements whose sum is 20.
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number of elements in an array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of an array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements whose sum is 20 are: \n");
	for(i=0;i<n;i++)
	{
		for(j=j+1;j<n;j++)
		{
			if (arr[i]+arr[j]==20)
			{
				printf("%d and%d\n", arr[i],arr[j]);
			}
		}
	}
}
