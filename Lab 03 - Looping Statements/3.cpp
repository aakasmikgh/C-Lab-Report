/*Enter an integer, calculate the number of digits which are 1 in that number and determine the product of digits which are divisible by 2. (Example = 21143, then number of
1 is 2 and product of digits is 2 x 4 = 8 ) */
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
