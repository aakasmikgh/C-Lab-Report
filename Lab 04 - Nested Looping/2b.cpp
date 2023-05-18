// generate the following pattern.
#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i,j,k,s=1;
	char str[]="programme";
	// printf("Enter the string: ");
	// scanf("%s",&n);
	for(i=0;i<5;i++)
	{
		for(k=0;k<2*i;k++)
		{
			printf(" "); // space ko lagi
		}
		for (j=i;j<9-i;j++)
		{
			printf("%c",str[j]);
		}

		printf("\n");
	}
	getch();
}
