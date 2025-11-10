#include <stdio.h>
int main(){
    int n, f, l, p = 1, t, s;
    printf("Enter a number: ");
    scanf("%d", &n);
    l = n % 10;   
    t = n;
    while (t >= 10){   // find first digit and place value
        t = t / 10;
        p = p * 10;
    }
    f = t;   // first digit
    // swap
    s = l * p + (n % p) / 10 * 10 + f;
    printf("After swapping: %d\n", s);
    return 0;
}



