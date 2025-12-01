#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    
    int total = n * (n + 1) / 2;

  
    int x = (int)sqrt(total);

    if (x * x == total)
        printf("%d\n", x);
    else
        printf("-1\n");

    return 0;
}
