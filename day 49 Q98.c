#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);
    int i = 0;

  
    while (i < len) {
        
        while (i < len && name[i] == ' ') i++;

        int start = i;
      
        while (i < len && name[i] != ' ') i++;

        
        if (i == len) {
            
            printf(" %s", &name[start]);
        } else if (start < i) {
            
            printf("%c", toupper(name[start]));
        }
    }

    printf("\n");
    return 0;
}
