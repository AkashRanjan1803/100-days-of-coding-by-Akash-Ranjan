#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    char ch;

    
    printf("Enter the source file name: ");
    scanf("%s", sourceFile);
    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Could not open source file %s\n", sourceFile);
        return 1;
    }

    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Could not open destination file %s\n", destFile);
        fclose(source);
        return 1;
    }

    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully from %s to %s.\n", sourceFile, destFile);

    
    fclose(source);
    fclose(dest);

    return 0;
}
