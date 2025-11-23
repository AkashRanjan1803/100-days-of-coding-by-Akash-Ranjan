#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        if (str[i] == '\0') break;
    }

    printf("Sentence with reversed words: %s", str);

    return 0;
}
