#include <stdio.h>
#include <conio.h>
int main()
{
	int a=5, b=7, c=4, arith, relog, assgn, prspt, size, con;
	arith = a/c - b%c + a*c;
	relog = (a>=b && a>c) || ! (c!=a && c==5);
	assgn = arith - 10;
	assgn /= a;
	prspt = (++a)/(b--) + (a++)%(--c) - (c++)*(--a);
	size = sizeof(a+3.5) + sizeof("b+c-4.5");
	con = (c-3)? a+b : (a>c ? a+b:a*b);
	printf("arith=%d\n relog=%d\n assgn=%d\n prspt=%d\n size=%d\n con=%d\n a=%d\n c=%d\n",arith, relog, assgn, prspt, size, con, a, c);
	getch();
}



