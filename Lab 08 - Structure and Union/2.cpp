// union declaration and member acess
#include<stdio.h>
typedef union
{
	char name[20];
	int roll, age;
}student;
main()
{
	student a;
	printf("Name: ");
	scanf("%s", &a.name);
	printf("Name is %s\n",a.name);
	printf("Roll number: ");
	scanf("%d", &a.roll);
	printf("Roll No is %d\n",a.roll);
	printf("Age: ");
	scanf("%d", &a.age);
	printf("Age is %d\n",a.age);
}
