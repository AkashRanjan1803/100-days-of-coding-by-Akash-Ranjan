#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[] = "your_file.txt";  
    char ch;
    
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;  
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0; 
        } else if (!in_word) {
            in_word = 1;
            words++;  
        }
    }

   
    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(file);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}
