#include <stdio.h>
#include <conio.h>
int main()
{
 int a = 3763;
 float b = 53.7384;
 char ch = 'A';
 char str[] = "Programming";
 printf("\na = %-6d",a);
 printf("\nb = %08.2f",b);
 printf("\nch = %2c",ch);
 printf("\nASCII = %d",ch);
 printf("\n%c = %d",ch,ch);
 printf("\nS = %12.3s",str);
 printf("\nC = %c", str[2]);
 printf("\nValue = %d", str[5]);
 printf("\nC = %c",str[0]+32);
 printf("\nC = %c",ch+35);
 getch();
}
 
