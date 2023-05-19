/* Write a program to make screen saver that dispaly different sized circles filled with different colors at random places. [Hint: use kbhit() function to detect key press and
setfillstyle() & floodfill() functions to fill color in circles]
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT,gm;
	int x=200, y=200,r=25,i;
	initgraph(&gd,&gm,"C:\\TURBOC3\BGI");
	for (i=1;i<20;i++)
	{
		setcolor(i);
		circle(x,y,r+i*5);
		delay(500);
	}
	getch();
	closegraph();
	return 0;
}
