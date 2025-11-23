#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0, end = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    while (str[end] != '\0') {
        end++;
    }

    if (str[end - 1] == '\n')
        end--;

    end--;  

   
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}
