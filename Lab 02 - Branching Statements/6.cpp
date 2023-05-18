// Read two numbers and an operator, calculate the final result based on operator given by the user. (use switch case)
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b, res;
	char op;
	printf("Enter two numbers:",a,b);
	scanf("%d %d" ,&a, &b);
	printf("+Add\n-Sub\n*Mul\n/Quoitent\n%Remainder\n");
	printf("Enter any one operator\n");
	scanf("%c", &op);
	switch(op)
	{
		case '+':
			res = a+b;
			printf("The sum is %d", res);
			break;
			case '-':
			res = a-b;
			printf("The difference is %d", res);
			break;
			case '*':
			res = a*b;
			printf("The product is %d", res);
			break;
			case '/':
			res = a/b;
			printf("The quotient is %d", res);
			break;
			case '%':
			res = a%b;
			printf("The remainder is %d", res);
			break;
			default:
				printf("Invalid operator");
	}
	getch();
}
