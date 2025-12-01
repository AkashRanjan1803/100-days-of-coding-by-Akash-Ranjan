#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

   
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

  
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(inputFile);
        return 1;
    }

    
    while ((ch = fgetc(inputFile)) != EOF) {
        
        if (ch >= 'a' && ch <= 'z') {
            ch = toupper(ch);
        }
       
        fputc(ch, outputFile);
    }

    printf("Text has been converted to uppercase and saved to output.txt.\n");

  
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
