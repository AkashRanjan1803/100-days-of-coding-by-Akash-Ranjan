//Write a program to assign grades based on a percentage input.
#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 75 && percentage < 90) {
        printf("Grade: B\n");
    } 
    else if (percentage >= 60 && percentage < 75) {
        printf("Grade: C\n");
    } 
    else if (percentage >= 45 && percentage < 60) {
        printf("Grade: D\n");
    } 
    else if (percentage >= 0 && percentage < 45) {
        printf("Grade: F (Fail)\n");
    } 
    else {
        printf("Invalid percentage! Please enter a value between 0 and 100.\n");
    }

    return 0;
}
