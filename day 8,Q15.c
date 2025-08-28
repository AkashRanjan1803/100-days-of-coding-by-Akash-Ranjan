//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an Uppercase Alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a Lowercase Alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a Digit.\n", ch);
    }
    else {
        printf("The character '%c' is a Special Character.\n", ch);
    }

    return 0;
}
