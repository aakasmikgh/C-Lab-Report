//Lab 09-03
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char name[20];
	int roll;
	float per;
}student;

main()
{
	student s;
	int n,c=0;
	FILE *fp;
	char op[3];
	fp = fopen("student.txt","ab");
	if (fp == NULL)
	exit(0);
	while(1)
	{
		printf("Enter name, roll_no and percentage: ");
		fflush(stdin);
		gets(s.name);
		fflush(stdin);
		scanf("%d%f", &s.roll, &s.per);
		fwrite(&s, sizeof(s), 1, fp);
		printf("\n Do you want to add another student?");
		scanf("%s",op);
		if(strcmpi(op,"No")== 0)
		break;
	}
	fclose(fp);
	printf("Enter position of data to display: ");
	scanf("%d",&n);
	fp = fopen("student.txt","rb");
	while(fread(&s,sizeof(s), 1, fp)!= NULL)
	{
		c = c+1;
		if (c==n)
		{
			printf("Name is %s\n",s.name);
			printf("Roll_no is %d\n",s.roll);
			printf("Percentage is %3f\n",s.per);
		}
	}
	fclose(fp);
}
