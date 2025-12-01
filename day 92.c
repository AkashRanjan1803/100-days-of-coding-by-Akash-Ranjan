#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Name: ");
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        if (students[i].name[strlen(students[i].name) - 1] == '\n') {
            students[i].name[strlen(students[i].name) - 1] = '\0';
        }

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

   
    printf("\nAll Student Details:\n");
   
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name     : %s\n", students[i].name);
        printf("Roll No  : %d\n", students[i].roll_no);
        printf("Marks    : %.2f\n\n", students[i].marks);
    }

    return 0;
}
