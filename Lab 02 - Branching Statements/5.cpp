// Read a character and display whether the entered charcater is alphabet, number, space or other charcaters.
#include <stdio.h>
#include <conio.h>
int main()
{
	int ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{
	printf("'%c' is a alphabet", ch);
}
else if (ch >= '0' && ch <= '9')
{
	printf("'%c' is a digit", ch);
}
else 
{
	printf("'%c' is a special charcater", ch);
}
getch();
}
