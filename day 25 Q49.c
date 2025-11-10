#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // number of rows

    for (i = n; i >= 1; i--) {        
        for (j = i; j <= n; j++) {    
            printf("%d", j);
        }
        printf("\n"); // move to next line
    }

    return 0;
}
