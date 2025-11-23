#include <stdio.h>

int main() {
    int n, key, i;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];   

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    
    i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];  
        i--;
    }

    
    arr[i + 1] = key;

    
    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
