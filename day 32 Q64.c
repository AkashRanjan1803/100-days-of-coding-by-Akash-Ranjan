#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0};

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    
    if (num < 0)
        num = -num;

   
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit])
            maxDigit = i;
    }

    printf("The digit that occurs the most is: %d\n", maxDigit);
    printf("It occurs %d times.\n", freq[maxDigit]);

    return 0;
}
