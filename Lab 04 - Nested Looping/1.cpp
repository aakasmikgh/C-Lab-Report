#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j;
	printf("SN\tValue\n");
	for(i=1;i<=4;i++)
	{
		printf("%d\t",i);
		for (j=4;j>0;j--)
		{
			if(i==2)
			continue;
		//	printf("%d",j);
		// printf("%d", i+j);
		printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
