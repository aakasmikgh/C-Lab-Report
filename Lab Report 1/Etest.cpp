#include <stdio.h>
#include <conio.h>
int main()
{
	char name[20];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Your name is: %s\n",name);
	printf("The second character is %c", name[1]);
	getch();
}
