#include <stdio.h>
#include <conio.h>
int main()
{
	int a[]={1,5,18,14,2,5},i;
	printf("Address\tValue\n");
	for(i=0;i<6;i++)
	{
		printf("%x\t%d\n",&a[i],a[i]);
	}
	printf("\na=%x",a);
	getch();
}
