//C program to accept two matrices and check whether they are equal or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j, rows, columns, a[10][10], b[10][10], isEqual;
  
 	printf("\n Enter Number of rows and columns :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Enter the First Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   
 	printf("\n Enter the Second Matrix Elements\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &b[rows][columns]);
    	}
  	}
  	isEqual = 1;
  	
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		if(a[rows][columns] != b[rows][columns])
			{
			  	isEqual = 0;
			  	break;
			}    
   	 	}
  	}
 	if(isEqual == 1)
 	{
 		printf("\n Matrix a is Equal to Matrix b");		
	}
	else
	{
		printf("\n Matrix a is Not Equal to Matrix b");
	}	
	getch();
}
