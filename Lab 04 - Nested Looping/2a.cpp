/*        N
        N e 
      N e p
    N e p a 
  N e p a l */
#include<stdio.h>
#include<conio.h>
int main()
{
	char str [] = "Nepal";
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf("%c",str[k]);
		}
		printf("\n");
	}
}
