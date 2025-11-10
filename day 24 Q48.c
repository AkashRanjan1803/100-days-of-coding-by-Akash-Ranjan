#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // number of rows

    for (i = 1; i <= n; i++) {        
        for (j = 1; j <= i; j++) {   
            printf("%d", j);
        }
        printf("\n"); // move to next line
    }

    return 0;
}
