#include <stdio.h>

#define MAX 1000

void firstNegativeInSubarrays(int arr[], int n, int k) {
    int queue[MAX]; 
    int front = 0, back = 0;

    for (int i = 0; i < n; i++) {
      
        if (front < back && queue[front] <= i - k)
            front++;

       
        if (arr[i] < 0)
            queue[back++] = i;

       
        if (i >= k - 1) {
            if (front < back)
                printf("%d ", arr[queue[front]]);
            else
                printf("0 ");
        }
    }
    printf("\n");
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid value of k\n");
        return 0;
    }

    printf("First negative integers in each subarray of size %d: ", k);
    firstNegativeInSubarrays(arr, n, k);

    return 0;
}
