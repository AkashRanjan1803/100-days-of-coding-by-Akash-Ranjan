#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 26 

int main() {
    char s[1000], t[1000];
    
    printf("Enter first string: ");
    scanf("%s", s);
    
    printf("Enter second string: ");
    scanf("%s", t);
    
    int len_s = strlen(s);
    int len_t = strlen(t);
    
    if (len_s != len_t) {
        printf("Not Anagram\n");
        return 0;
    }
    
    int count[CHAR_RANGE] = {0};
    
   
    for (int i = 0; i < len_s; i++) {
        count[s[i] - 'a']++;
    }
    
   
    for (int i = 0; i < len_t; i++) {
        count[t[i] - 'a']--;
    }
    
   
    for (int i = 0; i < CHAR_RANGE; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }
    
    printf("Anagram\n");
    return 0;
}
