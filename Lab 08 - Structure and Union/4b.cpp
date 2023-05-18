// use concept of structure to solve the following.
#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[30];
	int age, roll_number;
} student;

main()
{
	student s[50];
	int n,i,temp;
	printf("Enter number of students: ");
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter name of students no.%d\n", i+1);
		scanf("%s",s[i].name);
		printf("Enter age and roll number of students no.%d", i+1);
		scanf("%d %d", &s[i].age, &s[i].roll_number);
	}
	printf("\n4.b.1\n");
	for(i=0;i<n;i++)
	{
		printf("Name:%s\nAge:%d\nRoll no:%d, s[i].name, s[i].age, s[i].roll_number");
	}
	printf("\n4.b.2\n");
	for(i=0; i<n; i++)
	{
		if(s[i].roll_number % 2 == 0)
		{
			printf("Name:%s\nAge:%d\nRoll no:%d, s[i].name, s[i].age, s[i].roll_number");
		}
	}
	printf("\n4.b.3\n");
	for (i=0;i<n;i++)
	{
		if (s[i].name[0] == 'A')
		{
			printf("Name:%s\nAge:%d\nRoll no:%d, s[i].name, s[i].age, s[i].roll_number");
		}
	}
	printf("\n4.b.4\n");
	for (i=0;i<n;i++)
	{
		if (strcmpi(s[i].name,"robert"));
		{
			printf("Name:%s\nAge:%d\nRoll no:%d, s[i].name, s[i].age, s[i].roll_number");
		}
	}
	printf("\n4.b.5\n");
	temp=s[0].age;
	for (i=1;i<n;i++)
	{
		if (temp<s[i].age)
		{
			temp=s[i].age;
		}
	}
	for (i=0;i<n;i++)
	{
		if (s[i].age == temp)
		{
			printf("Name:%s\nAge:%d\nRoll no:%d, s[i].name, s[i].age, s[i].roll_number");
		}
	}
}
