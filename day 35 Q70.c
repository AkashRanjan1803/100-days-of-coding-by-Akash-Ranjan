#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k (number of positions to rotate): ");
    scanf("%d", &k);

   
    k = k % n;

   
    int rotated[n];

    
    int index = 0;

    
    for (int i = n - k; i < n; i++) {
        rotated[index++] = arr[i];
    }

    
    for (int i = 0; i < n - k; i++) {
        rotated[index++] = arr[i];
    }

    
    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}
