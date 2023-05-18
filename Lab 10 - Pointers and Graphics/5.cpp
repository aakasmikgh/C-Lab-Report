#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
	int x,y,r1,r2;
	int gd = DETECT, gm;
	initgraph(tgd,tgm."C:\\TURBOC\\BGI");
	printf("Enter end point of lines: ");
	scanf("%d%d%d%d",&x11,&y11,&x12,&y12);
	line(x11,y11,x12,y12);
	setcolor(RED);
	line(x11,y21,x22,y22);
	getch();
	closegraph();
	return 0;
}
