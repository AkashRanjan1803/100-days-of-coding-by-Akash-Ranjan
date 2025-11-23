#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    
    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

   
    for(int d = 0; d < r + c - 1; d++) {
        
        int row = (d < c) ? 0 : d - c + 1;
        int col = (d < c) ? d : c - 1;

       
        while(row < r && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    printf("\n");
    return 0;
}
