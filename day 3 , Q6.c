//Write a program to swap two numbers using a third variable
#include <stdio.h>

int main() {
    int a, b, swap;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Display original values
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping logic using a third variable
    swap = a;
    a = b;
    b = swap;

    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
