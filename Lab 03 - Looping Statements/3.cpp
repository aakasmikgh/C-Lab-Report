#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of digits: ");
    scanf("%d", &n);
    int sum = 0;
    
    while(n){
        sum += n % 10;
        n /= 10;
    }
    printf("The number of n are %d\n", sum);
    
    getch();
}
