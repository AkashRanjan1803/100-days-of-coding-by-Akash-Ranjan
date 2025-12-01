#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];  
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
   
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    
    int i = 0;
    if (str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    for (; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]); 
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
