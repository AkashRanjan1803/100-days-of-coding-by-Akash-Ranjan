#include <stdio.h>

int main() {
    FILE *file;
    char line[256]; 

   
    file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file! Make sure info.txt exists.\n");
        return 1;
    }

    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  
    }

    
    fclose(file);

    return 0;
}
