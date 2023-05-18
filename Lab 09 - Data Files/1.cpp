//wap to read integers from user until user says no. write all the odd number to a file named odd.txt and all even numbers to find named even.txt
#include<stdio.h>
#include<string.h>
main()
{
	int n, r;
	char name[10];
	FILE *ef, *of;
	ef = fopen("even.txt", "w");
	of = fopen("odd.txt", "w");
	while (1)
	{
		printf("Do you want to enter number (yes or no): ");
		scanf("%s", &name);
		if (strcmpi(name, "no") == 0)
		{
			break;
		}
		printf("Enter a number:");
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			fprintf(ef, "%d\n", n);
		}
		else
		fprintf(of, "%d\n", n);
	}
	fclose(ef);
	fclose(of);
}

