#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n-1]; 
    printf("Enter %d elements (numbers from 0 to %d, one missing): ", n-1, n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int total_sum = n * (n + 1) / 2;
    int array_sum = 0;
    for (int i = 0; i < n-1; i++) {
        array_sum += arr[i];
    }

    int missing_number = total_sum - array_sum;
    printf("Missing number is: %d\n", missing_number);

    return 0;
}
