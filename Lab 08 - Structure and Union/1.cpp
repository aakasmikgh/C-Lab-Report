// structure declaration, initialization and member acess
#include<stdio.h>
typedef struct
{
	char name[20];
	int roll, age;
}student;

main()
{
	student s={"Ram", 1, 20};
printf("Name is %s\nRoll_number is %d\nAge is %d\n",s.name, s.roll, s.age);
}

