#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int areIdentical(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    struct Student s1, s2;

   
    printf("Enter details of first student:\n");
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    if (s1.name[strlen(s1.name) - 1] == '\n') {
        s1.name[strlen(s1.name) - 1] = '\0';
    }
    printf("Roll Number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);
    getchar(); 


    printf("\nEnter details of second student:\n");
    printf("Name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    if (s2.name[strlen(s2.name) - 1] == '\n') {
        s2.name[strlen(s2.name) - 1] = '\0';
    }
    printf("Roll Number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

   
    if (areIdentical(s1, s2)) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
