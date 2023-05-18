#include <stdio.h>
#include <conio.h>
int main()
{
	int A = 21567;
	float B = 37.4782;
	char C = 'D';
	char S[] = "ENGINEER";
	printf("\nA = %010d", A);
	printf("\nB = %-8.2f", B);
	printf("\nS = %12s", S);
	printf("\nS = %-10.6s", S);
	printf("\nC = %3c", C);
	printf("\nC = %c", C);
	getch();
}
