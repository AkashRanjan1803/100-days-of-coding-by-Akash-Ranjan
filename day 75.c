#include <stdio.h>

int main() {
    char filename[100];
    char text[500]; 
   
    printf("Enter the filename: ");
    scanf("%s", filename);

   
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

   
    getchar();  

   
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);  
   
    fputs(text, file);

    printf("Text appended successfully to %s.\n", filename);

   
    fclose(file);

    return 0;
}
