#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];
    int diag[n];  // to store diagonal elements
    int i, j, k, distinct = 1;

   
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    for(i = 0; i < n; i++) {
        diag[i] = a[i][i];
    }

    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0)
            break;
    }

    
    if(distinct)
        printf("All diagonal elements are DISTINCT.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
