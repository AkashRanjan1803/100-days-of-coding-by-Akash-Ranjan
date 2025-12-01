#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 1 to n-1, with one repeated): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xor_all = 0;
    
  
    for (int i = 0; i < n; i++) {
        xor_all ^= arr[i];
    }

   
    for (int i = 1; i <= n-1; i++) {
        xor_all ^= i;
    }

    printf("Repeated element is: %d\n", xor_all);

    return 0;
}
