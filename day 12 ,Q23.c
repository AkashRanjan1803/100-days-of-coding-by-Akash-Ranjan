//Write a program to calculate a library fine based on late days.
#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    if (days <= 0) {
        fine = 0;
    }
    else if (days <= 5) {
        fine = days * 1.0;  
    }
    else if (days <= 10) {
        fine = (5 * 1.0) + (days - 5) * 2.0; 
    }
    else if (days <= 30) {
        fine = (5 * 1.0) + (5 * 2.0) + (days - 10) * 5.0; 
    }
    else {
        printf("Membership cancelled due to late return beyond 30 days.\n");
        return 0;
    }

    printf("The library fine is: Rs. %.2f\n", fine);

    return 0;
}
