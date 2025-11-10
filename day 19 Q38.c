#include<stdio.h>
int main()
{
    int n, sum = 0, dg;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        dg = n % 10;    
        n = n / 10;        
        sum = sum + dg; 
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}
