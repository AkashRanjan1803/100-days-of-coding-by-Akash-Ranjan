#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;
    int vowels = 0, consonants = 0;

    
    printf("Enter the filename: ");
    scanf("%s", filename);

   
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

   
    while ((ch = fgetc(file)) != EOF) {
       
        if (isalpha(ch)) {
            ch = tolower(ch);  
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

   
    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
