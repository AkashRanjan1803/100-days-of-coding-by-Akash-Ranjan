#include <stdio.h>
int main()
{
    int num, dg, pro = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0) 
    {
        printf("Product of odd digits = 0\n");
        return 0;
    }
    while (num > 0) {
        dg = num % 10; 
        if (digit % 2 != 0) 
        {  
            pro = pro*dg;
        }
        num = num / 10; 
    }
        printf("No odd digits found.\n");
    return 0;
}




