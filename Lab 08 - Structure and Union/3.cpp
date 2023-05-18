//nested structure, member acess
#include<stdio.h>
typedef struct
{
	int hour;
	int min;
}time;

typedef struct
{
	char name[20];
	int age;
	time t;
}employee;

main()
{
	employee e;
	printf("Name: ");
	scanf("%s",e.name);
	printf("Name is %s\n",e.name);
	printf("Roll_number: ");
	scanf("%d",&e.age);
	printf("Roll_number is %d\n",e.age);
	printf("Entry time(HH:MM)");
	scanf("%d%d",&e.t.hour ,&e.t.min);
	printf("Entry time is %d:%d\n",e.t.hour,e.t.min);
}
