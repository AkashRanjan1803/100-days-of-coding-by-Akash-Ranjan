#include <stdio.h>

#define MAX 1000

void printMaxInSubarrays(int arr[], int n, int k) {
    int deque[MAX]; 
    int front = 0, back = 0;

    for (int i = 0; i < n; i++) {
      
        if (front < back && deque[front] <= i - k)
            front++;

      
        while (front < back && arr[i] >= arr[deque[back - 1]])
            back--;

       
        deque[back++] = i;

       
        if (i >= k - 1)
            printf("%d ", arr[deque[front]]);
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

    printf("Maximum elements in each subarray of size %d: ", k);
    printMaxInSubarrays(arr, n, k);

    return 0;
}
