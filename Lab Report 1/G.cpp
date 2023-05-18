
// code to convert degree into radian
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define pi 3.141
int main()
{
	float deg, rad;
	printf("Enter angle in degree\n");
	scanf("%f", &deg);
	rad = deg / 180;
	printf("Angle in radian is %f Pi\n", rad);
	getch();
}
