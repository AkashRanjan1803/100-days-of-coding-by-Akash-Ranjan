#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // number of rows and columns

    for (i = 1; i <= n; i++) {       
        for (j = 1; j <= n; j++) {    
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}
