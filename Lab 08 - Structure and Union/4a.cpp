//use concept of structure to solve the following.
#include<stdio.h>
typedef struct
{
	int feet, inches;
}height;

main()
{
	height h;
	int in;
	printf("Enter height in feet and inches: ");
	scanf("%d%d",&h.feet, &h.inches);
	in=h.feet*12+h.inches;
	printf("Height in inches is %d\n",in);
}

