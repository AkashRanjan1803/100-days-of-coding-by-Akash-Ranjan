#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256  // Total ASCII characters

int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);

    int n = strlen(s);
    int last_index[CHAR_RANGE];

   
    for (int i = 0; i < CHAR_RANGE; i++)
        last_index[i] = -1;

    int max_len = 0;
    int start = 0;
    for (int i = 0; i < n; i++) {
        if (last_index[(int)s[i]] >= start) {
            start = last_index[(int)s[i]] + 1;
        }

        last_index[(int)s[i]] = i;
        if (i - start + 1 > max_len)
            max_len = i - start + 1;
    }

    printf("Length of the longest substring without repeating characters: %d\n", max_len);

    return 0;
}
