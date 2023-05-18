//wap to read n elements in an array print them using pointer
#include<stdio.h>
#include<conio.h>
main()
{
	int data[10];
	int n,i;
	printf("Enter total elements to be entered: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0; i<5; i++)
	scanf("%d", data+i);
	printf("Elements you entered: \n");
	for(i=0; i<5; ++i)
	printf("%d\n", *(data+i));
	getch();
}
