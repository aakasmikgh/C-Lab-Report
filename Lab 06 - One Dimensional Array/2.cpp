#include<stdio.h>  
  
int main()  
{  
    int a[5], i;  
  
    printf("Enter 5 integer numbers\n");  
    for(i = 0; i < 5; i++)  
        scanf("%d", &a[i]);  
  
    printf("Array elements are:\n");  
    for(i = 4; i >= 0; i--)  
        printf("%d\n", a[i]);  
  
    return 0;  
}  
