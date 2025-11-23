#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    
    for (int i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i])) {
            freq1[tolower(str1[i]) - 'a']++;
        }
    }

    
    for (int i = 0; str2[i] != '\0'; i++) {
        if (isalpha(str2[i])) {
            freq2[tolower(str2[i]) - 'a']++;
        }
    }

   
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
