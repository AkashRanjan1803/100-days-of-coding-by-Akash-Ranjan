#include <stdio.h>

int main() {
    FILE *file;
    char name[100];
    int age;

   
    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

   
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  
   
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);

  
    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
