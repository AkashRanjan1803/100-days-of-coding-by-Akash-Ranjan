#include <stdio.h>
int main()
{
    int num1, num2,lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (lcm = 1;; lcm++)
    {
        if (lcm % num1 == 0 && lcm % num1 == 0)
        {
            break;
        }
    }
    printf("LCM of %d and %d = %d\n", num1,num2,lcm);
    return 0;
}
