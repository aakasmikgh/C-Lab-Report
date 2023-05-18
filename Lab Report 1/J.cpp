// wap to read student name, roll no, section and marks in three subjects and calculate average marks. Display all the records.
#include <stdio.h>
#include <conio.h>
int main()
{
	char name[20];
	int roll, a, b, c;
	char sec;
	float avg;
	printf("Enter student name: ");
	scanf("%s", &name);
	printf("Enter roll number: ");
	scanf("%d", &roll);
	printf("Enter section: ");
	scanf(" %c", &sec);
	printf("Enter marks of three subjects: ");
	scanf("%d%d%d",&a,&b,&c);
	avg = (float) (a+b+c)/3;
	printf("\nName of student is %s",name);
	printf("\nRoll number of student is %d",roll);
	printf("\nSection of student %c",sec);
	printf("\nMarks in three subject %d %d %d",a,b,c);
	printf("\nAverage marks of three subjects %f",avg);
	getch();
}
